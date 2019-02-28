#pragma once

class TimeOfDay {
public:
	DefineSingleton(TimeOfDay, 0x41426b);

	DefineConstMethod(GetHour, 0x4126d4, unsigned int, NO_PARAMS, NO_ARGS);
  void SetHour(unsigned int newValue) {
    hour = newValue;
  }
	DefineConstMethod(GetMinute, 0x4126d8, unsigned int, NO_PARAMS, NO_ARGS);
  void SetMinute(unsigned int newValue) {
    minute = newValue;
  }
	DefineMethod(RCSetTime, 0x8ffd7f, void, Params(unsigned long unk1, unsigned long unk2), Args(unk1, unk2));

  // 0x00
  FillStruct(0x00, 0x08);
  // 0x08
  unsigned int hour;
  // 0x0c
  unsigned int minute;
};
