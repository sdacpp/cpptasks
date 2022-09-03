#include <iostream>
#include "MorseConverter.hpp"
#include <string>

int main() {
	MorseConverter mc;
	std::string convertedStringToMorseCode = mc.covertStringToMorse("my string check this out");
	std::cout << convertedStringToMorseCode << std::endl;

	std::string convertedMorseCodeToString = mc.covertMorseToString("-- -.--  -- --- .-. ... .  -.-. --- -.. .  - .-. .- -. ... .-.. .- - --- .-.");
	std::cout << convertedMorseCodeToString << std::endl;
	return 0;
}