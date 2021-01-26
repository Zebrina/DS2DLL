#pragma once

#include <list>

typedef unsigned int sinkhandle;

template <typename Priority, typename ...Args>
class EventSink {
public:
    virtual ~EventSink() = default;
    virtual void Invoke(Args... args) = 0;
};

template <typename Priority, typename ...Args>
class EventDispatcher {
private:
    typedef EventSink<Priority, Args...> EventSinkType;
    typedef void(__cdecl *EventSinkProc)(Args...);

public:
    template <typename T>
    sinkhandle AddSink(const T& sink, Priority priority = (Priority)0) {
        sinkhandle handle = nextHandle++;
        sinks.push_back(new SinkStorage(handle, priority, sink));
        sinks.sort(SinkPrioritizer());
        return handle;
    }
    sinkhandle AddSink(EventSinkProc proc, Priority priority = (Priority)0) {
        return AddSink(EventSinkWrapper(proc), priority);
    }

    void Invoke(Args... args) {
        for (auto it = sinks.begin(); it != sinks.end(); ++it) {
            (*it)->sink->Invoke(args...);
        }
    }

    bool RemoveSink(sinkhandle handle) {
        for (auto it = sinks.begin(); it != sinks.end(); ++it) {
            if ((*it)->handle == handle) {
                sinks.erase(it);
                return true;
            }
        }
        return false;
    }
    void Clear() {
        for (auto it = sinks.begin(); it != sinks.end(); ++it) {
            delete *it;
        }
        sinks.clear();
    }

private:
    class EventSinkWrapper : public EventSinkType {
    public:
        EventSinkWrapper(EventSinkProc proc) :
            proc(proc) {
        }
        virtual void Invoke(Args... args) {
            proc(args...);
        }
    private:
        EventSinkProc proc;
    };
    struct SinkStorage {
        sinkhandle handle;
        Priority priority;
        EventSinkType* sink;

        template <typename T>
        SinkStorage(sinkhandle handle, Priority priority, const T& sink) :
            handle(handle),
            priority(priority),
            sink(new T(sink)) {
        }
        SinkStorage(const SinkStorage&) = delete;
        SinkStorage(SinkStorage&& other) :
            handle(other.handle),
            priority(other.priority),
            sink(other.sink) {
            other.sink = nullptr;
        }
        ~SinkStorage() {
            delete sink;
        }
    };
    struct SinkPrioritizer {
        bool operator()(const SinkStorage* x, const SinkStorage* y) {
            if (x->priority == y->priority) {
                return x->handle < y->handle;
            }
            return x->priority > y->priority;
        }
    };

    std::list<SinkStorage*> sinks;
    sinkhandle nextHandle = 0;
};
