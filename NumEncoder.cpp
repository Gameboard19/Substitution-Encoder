#include "NumEncoder.h"

void Encoder::storeAsciiValues(std::string& s) {
	for (int i = 0; i < s.length(); i++) {
		valueQ_.push((int)s[i]);
	}
	return;
};
std::string Encoder::encodeAscii(std::string& s) {
	std::string output = "";
	if (s.length() > 0) {
		storeAsciiValues(s);
		while (valueQ_.size() > 0) {
			output += std::to_string(valueQ_.front());
			valueQ_.pop();
			if (valueQ_.size() > 0) output += "_";
		}
		return output;
	}
	else {
		return "Encode Error!\n";
	}
}
void Encoder::shiftAscii(std::string& s, int shiftVal) {
	for (int i = 0; i < s.length(); i++) {
		s[i] += shiftVal;
	}
	return;
}
void Encoder::shiftAsciiByPos(std::string& s, int shiftVal) {
	for (int i = 0; i < s.length(); i++) {
		s[i] += (shiftVal * i);
	}
	return;
}