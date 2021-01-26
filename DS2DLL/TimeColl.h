#pragma once

class TimeColl {
public:
	$ConstMethod(0x00503520, Empty, bool);
	$ConstMethod(0x00503517, Size, int);
	$Method(0x0050352b, Get, float, int index);
	$Method(0x0050353a, Set, void, int index, float newItem);
	$Method(0x00503c46, Append, void, float newItem);
};
