#include "GuessTheNumber.h"
#include <iostream>;
#include <string>;

GuessTheNumber::GuessTheNumber() : device(), engine(device()), dist(MIN_NUMBER, MAX_NUMBER)
{
	numberToGuess = dist(engine);
}

void GuessTheNumber::startGame() {
	std::cout << "WELCOME IN GUESS THE NUMBER GAME." << std::endl;
	guess();
}


GuessResult GuessTheNumber::getGuessResult() {
	if (userChoice == numberToGuess) {
		return GuessResult::WINNER;
	}

	return userChoice > numberToGuess ? GuessResult::GUESS_LOWER : GuessResult::GUESS_HIGHER;
}

void GuessTheNumber::guess() {
	while (true) {
		askForNumber();
		GuessResult result = getGuessResult();
		showResult(result);

		if (result == GuessResult::WINNER) break;
	}
}

void GuessTheNumber::askForNumber() {
	std::cout << "GUESS YOUR NUMBER: " << std::endl;
	std::cin >> userChoice;
}

void GuessTheNumber::showResult(GuessResult result)
{
	std::string textToShow = getGuessResultString(result);
	if (isCloseToGuess()) std::cout << "You're close to guess!" << std::endl;
	std::cout << textToShow << std::endl;
}

std::string GuessTheNumber::getGuessResultString(GuessResult result) {
	switch (result) {
	case GuessResult::WINNER:
		return "You win!";
	case GuessResult::GUESS_HIGHER:
		return "Guess higher.";
	case GuessResult::GUESS_LOWER:
		return "Guess lower";
	default:
		return "";
	}
}

bool GuessTheNumber::isCloseToGuess() {
	for (int i = 1; i <= CLOSE_VALUE; i++) 
		if (userChoice + i == numberToGuess || userChoice - i == numberToGuess)
			return true;
	
	return false;
}