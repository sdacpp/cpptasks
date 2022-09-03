#pragma once
#include <string>
#include <random>
//Zadanie 13
//Napisz gre w zgadywanie numeru.Program losuje liczbe z przedziału 1 - 100, a uzytkownik probuje zgadnąć.
//Po kazdej próbie program podpowiada czy liczba jest większa czy mniejsza od podanej przez gracza.Gdy, gracz jest
//blisko(np + -3) to program powinien dodatkowo powiadomić gracza o tym, że jest blisko.
//Zadanie można rozwiązac za pomocą jednej klasy GuessTheNumber

enum GuessResult { WINNER, GUESS_LOWER, GUESS_HIGHER };

class GuessTheNumber
{
private:
	int numberToGuess = 0;
	int userChoice = 0;
	const unsigned short int CLOSE_VALUE = 3;
	const unsigned short int MIN_NUMBER = 0;
	const unsigned short int MAX_NUMBER = 100;

	std::default_random_engine engine;
	std::random_device device;
	std::uniform_int_distribution<unsigned short int> dist;

	GuessResult getGuessResult();
	std::string getGuessResultString(GuessResult result);
	bool isCloseToGuess();
	void askForNumber();
	void showResult(GuessResult result);
	void guess();

public:
	GuessTheNumber();
	~GuessTheNumber() {};

	void startGame();
};

