#pragma once
#include <stdint.h>
#include <vector>
#include <random>
//Zadanie 15
//Napisz program, który zasymuluje rzut monetą.Wczytaj od uzytkownika ile prób ma zostać wygenerowane, a następnie wypisz :
//-wszystkie wylosowane wartości(w postaci ORRORORORRROOORRORO), po 20 wartości na 1 wiersz
//- ilość wylosowanych orłów i reszek wraz z ich procentowym udziałem
//- najdluższy ciąg samych orłów i samych reszek, wraz z ich długościami i od której próby się zaczął ten ciąg
//- (!trudne) najdłuższy ciąg gdzie orzeł i reszka występują na zmianę(OROROROROROR)

enum CoinSide { Front, Back };

class CoinFlipper
{
private:
	std::default_random_engine engine;
	std::random_device device;
	std::uniform_int_distribution<unsigned short int> dist;

	const uint16_t NUMBERS_PER_ROW = 20;
	const uint16_t TOTAL_PERCENTAGE = 100;

	
	uint16_t flipsNumber = 0;
	std::vector<CoinSide> results;

	void flip();
	float getFrontsPercentageValue();
	float getBacksPercentageValue();

	void showLongestFlow();


public:
	void initialize();
	void displayFlips();
	void showPercentageValues();

	CoinFlipper();
	~CoinFlipper() {};
};

