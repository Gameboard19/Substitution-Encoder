#pragma once

#include "used_headers.h"

class Encoder
{
private:
	std::queue<unsigned int> valueQ_;
	void storeAsciiValues(std::string& s);
public:
	std::string encodeAscii(std::string& s);
	void shiftAscii(std::string& s, int shiftVal);
	void shiftAsciiByPos(std::string& s, int shiftVal);
	//might do these in the future.
	//std::string encodeUnicode(std::wstring& ws);
};

