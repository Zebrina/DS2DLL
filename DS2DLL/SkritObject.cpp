#include "SkritObject.h"

FEX bool Skrit::Object::GetTraceOpCodes() const {
    return bTraceOpCodes;
}
FEX void Skrit::Object::SetTraceOpCodes(bool enable) {
    bTraceOpCodes = enable;
}
FEX bool Skrit::Object::GetTraceSysCalls() const {
    return bTraceSysCalls;
}
FEX void Skrit::Object::SetTraceSysCalls(bool enable) {
    bTraceSysCalls = enable;
}
FEX bool Skrit::Object::GetTraceSkritCalls() const {
    return bTraceSkritCalls;
}
FEX void Skrit::Object::SetTraceSkritCalls(bool enable) {
    bTraceSkritCalls = enable;
}
FEX bool Skrit::Object::GetTraceStateChanges() const {
    return bTraceStateChanges;
}
FEX void Skrit::Object::SetTraceStateChanges(bool enable) {
    bTraceStateChanges = enable;
}
FEX bool Skrit::Object::GetTraceEvents() const {
    return bTraceEvents;
}
FEX void Skrit::Object::SetTraceEvents(bool enable) {
    bTraceEvents = enable;
}