#include "StringCensor.h"

std::string StringCensor::censor(std::string sentence) {
	std::string censoredSentence = "";
	//if (!censoredLetters.size()) return sentence;

	for (char letter : sentence) {
		bool itemFound = censoredLetters.find(letter) != censoredLetters.end();
		if (itemFound) {
			censoredSentence += '*';
		} else {
			censoredSentence += letter;
		}
	}
	return censoredSentence;
}


void StringCensor::addCensoredLetter(char letter) {
	censoredLetters.insert(letter);
}

void StringCensor::removeCensoredLetter(char letter) {
	censoredLetters.erase(letter);
}

void StringCensor::clearCensored() {
	censoredLetters.clear();
}