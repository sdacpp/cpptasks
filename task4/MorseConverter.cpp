
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include "MorseConverter.hpp"

std::string MorseConverter::covertStringToMorse(std::string stringToCode) {
	std::string converted = "";
	for (auto letter : stringToCode) {
		if (letter == ' ') {
			converted += "  ";
		}
		else {
			converted += morseCodeLetterMap[letter] + " ";
		}
	}
	return converted;
}

std::string MorseConverter::covertMorseToString(std::string morseToDecode) {
	std::string converted = "";
	auto morseDictionary = getReversedMorseLetterDictionary();
	std::string fullSymbol = "";
	size_t codeLength = morseToDecode.size();
	for (int i = 0; i <= codeLength; i++) {

		char currentLetter = morseToDecode[i];
		int prevItem = i - 1;
		char prevLetter = prevItem >= 0 ? morseToDecode[prevItem] : '\0';
		bool hasFullSymbol = prevLetter == ' ';
		bool hasFullWord = prevLetter == ' ' && currentLetter == ' ';

		if (hasFullWord) {
			converted += " ";
			continue;
		}

		if (currentLetter != ' ' && currentLetter != '\0') {
			fullSymbol += currentLetter;
		}
		else {
			converted += morseDictionary[fullSymbol];
			fullSymbol = "";
		}
	}

	return converted;
};
