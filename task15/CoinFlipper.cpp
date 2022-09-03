#include "CoinFlipper.h";
#include <algorithm>
#include <iostream>

//Zadanie 15
//Napisz program, który zasymuluje rzut monetą.Wczytaj od uzytkownika ile prób ma zostać wygenerowane, a następnie wypisz :
//-wszystkie wylosowane wartości(w postaci ORRORORORRROOORRORO), po 20 wartości na 1 wiersz (done)
//- ilość wylosowanych orłów i reszek wraz z ich procentowym udziałem (done)
//- najdluższy ciąg samych orłów i samych reszek, wraz z ich długościami i od której próby się zaczął ten ciąg
//- (!trudne) najdłuższy ciąg gdzie orzeł i reszka występują na zmianę(OROROROROROR)

bool IsFront(CoinSide val) {
	return val == CoinSide::Front; }


CoinFlipper::CoinFlipper() : device(), engine(device()), dist(0, 1) {
	initialize();
}

void CoinFlipper::initialize() {
	std::cout << "How many coin flips should I perform? " << std::endl;
	std::cin >> flipsNumber;
	flip();
}

void CoinFlipper::flip() {
	for (int i = 0; i < flipsNumber; i++) {
		CoinSide flip = static_cast<CoinSide>(dist(engine));
		results.push_back(flip);
	}
}

void CoinFlipper::displayFlips() {
	std::string resultString = "";
	int currentCount = 0;
	std::for_each(results.begin(), results.end(), [&](auto result) {
		if (currentCount == NUMBERS_PER_ROW) {
			resultString += '\n';
			currentCount = 0;
		}
		resultString += (IsFront(result) ? "R" : "O");
		currentCount++;
	});
	
	std::cout << "Result:\n" << resultString << std::endl;
}


float CoinFlipper::getFrontsPercentageValue() {
	if (flipsNumber == 0) return 0;
	int fronts = std::count_if(results.begin(), results.end(), IsFront);
	float frontsPercentage = static_cast<float>(TOTAL_PERCENTAGE * fronts) / flipsNumber;
	return frontsPercentage;
}

float CoinFlipper::getBacksPercentageValue() {
	if (flipsNumber == 0) return 0;
	float fronts = getFrontsPercentageValue();
	return TOTAL_PERCENTAGE - fronts;
}

void CoinFlipper::showPercentageValues() {
	auto frontPercentage = getFrontsPercentageValue();
	auto backPercentage = getBacksPercentageValue();
	std::cout.precision(4);
	std::cout << "FRONTS: " << frontPercentage << '%' << std::endl;
	std::cout << "BACKS: " << backPercentage << '%' << std::endl;
}

