#pragma once

#include "Memory.h"

template <typename T>
class GPFastVector {
public:

	/*
	$ConstMethod(0x005035a1, Empty, bool);
	$ConstMethod(0x00503598, Size, int);
	$ConstMethod(0x007ed5f4, Has, bool, Go* go);
	$ConstMethod(0x005035ac, Get, Go*, int index);
	$ConstMethod(0x005035cd, Front, Go*);
	$ConstMethod(0x005035d2, Back, Go*);
	$Method(0x00503c5b, Add, void, Go* go);
	$Method(0x005035bb, Set, void, int index, Go* go);
	$Method(0x007ed5ca, Remove, bool, Go* go);
	$Method(0x005035d9, PopBack, void);
	$Method(0x007ed616, Clean, void);
	$Method(0x005038f3, Clear, void);
	*/

    T& operator[](int index) {
        return head[index];
    }

	bool Empty() const {
        return (tail - head) == 0;
	}
    size_t Size() const {
        return (tail - head) / sizeof(T);

    }
    bool Has(const T value) const {
        T* element = head;
        while (element < tail) {
            if (*element == value) {
                return true;
            }
            ++element;
        }
        return false;
    }
    T Get(int index) const {
        return head[index];
    }
    T Front() const {
        return *head;
    }
    T Back() const {
        return tail[-1];
    }

    // Can't use these!
    /*
    void Set(int index, T value) {
        head[index] = value;
    }
    void PopBack() {
        --tail;
    }
    */

    template <class Action>
    void ForEach(Action action) {
        T* element = head;
        while (element < tail) {
            action(*element);
            ++element;
        }
    }
    template <class Action>
    void ForEach(Action* action) {
        T* element = head;
        while (element < tail) {
            (*action)(*element);
            ++element;
        }
    }

private:
	T* head;
	T* tail;
};
