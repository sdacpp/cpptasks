#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <map>


class MorseConverter {
private:
	std::map<char, std::string> morseCodeLetterMap = {
		{ 'a', ".-"},
		{ 'b', "-..."},
		{ 'c', "-.-."},
		{ 'd', "-.."},
		{ 'e', "."},
		{ 'f', "..-."},
		{ 'g', "--."},
		{ 'h', "...."},
		{ 'i', ".."},
		{ 'j', ".---"},
		{ 'k', "-.-"},
		{ 'l', ".-.."},
		{ 'm', "--"},
		{ 'n', "-."},
		{ 'o', "---"},
		{ 'p', ".--."},
		{ 'q', "--.-"},
		{ 'r', ".-."},
		{ 's', "..."},
		{ 't', "-"},
		{ 'u', "..-"},
		{ 'v', "...-"},
		{ 'w', ".--"},
		{ 'x', "-..-"},
		{ 'y', "-.--"},
		{ 'z', "--.."}
	};


	std::map<std::string, char> getReversedMorseLetterDictionary() {
		std::map<std::string, char> morseCodeMap;
		for (std::map<char, std::string>::iterator i = morseCodeLetterMap.begin(); i != morseCodeLetterMap.end(); ++i) {
			morseCodeMap[i->second] = i->first;
		}

		return morseCodeMap;
	}

public:
	std::string covertStringToMorse(std::string stringToCode);

	std::string covertMorseToString(std::string morseToDecode);
};