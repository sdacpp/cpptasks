#pragma once
#include <string>
#include <set>

class StringCensor
{

	std::set<char> censoredLetters;

public:
	void addCensoredLetter(char letter);
	void removeCensoredLetter(char letter);
	void clearCensored();
	std::string censor(std::string sentence);
};

