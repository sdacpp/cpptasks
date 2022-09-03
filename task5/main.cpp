#include <iostream>
#include <string>
#include "StringCensor.h"
int main() {

	StringCensor sc;
	std::string censored = sc.censor("testowe zdanko");
	std::cout << censored << std::endl;

	sc.addCensoredLetter('a');

	std::string censored2 = sc.censor("testowe zdanko");
	std::cout << censored2 << std::endl;

	sc.addCensoredLetter('t');

	std::string censored3 = sc.censor("testowe zdanko");
	std::cout << censored3 << std::endl;

	sc.removeCensoredLetter('t');

	std::string censored4 = sc.censor("testowe zdanko");
	std::cout << censored4 << std::endl;

	sc.clearCensored();

	std::string censored5 = sc.censor("testowe zdanko");
	std::cout << censored5 << std::endl;
		
	return 0;
}