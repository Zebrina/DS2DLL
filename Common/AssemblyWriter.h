#pragma once

class AssemblyWriter {
public:

	void WriteN(uintptr_t);
	void Write1(char value);
	void Write1(unsigned char value);
	void Write2(short value);
	void Write2(unsigned short value);
	void Write4(int value);
	void Write4(unsigned int value);


};
