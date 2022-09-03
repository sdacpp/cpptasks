#include "OddEvenSorter.h"
#include <cstdlib>
#include <algorithm> 

OddEvenSorter::OddEvenSorter() {
	initialize();
}

void OddEvenSorter::initialize() {
	generateRandomNumbers();
	sortVectors();
}

void OddEvenSorter::generateRandomNumbers() {
	srand((unsigned)time(NULL));

	for (int i = 0; i < NUMBERS_TO_GENERATE; ++i) {
		int number = (rand() % NUMBER_RANGE);
		if (isEven(number)) {
			evens.push_back(number);
		}
		else {
			odds.push_back(number);
		}
	}
}

bool sortAscending(int i, int j) { return (i < j); }

void OddEvenSorter::sortVectors() {
	std::sort(evens.begin(), evens.end(), sortAscending);
	std::sort(odds.begin(), odds.end(), sortAscending);
}

void OddEvenSorter::displayNumbers() {
	for (auto even : evens) std::cout << even << ' ';
	for (auto odd : odds) std::cout << odd << ' ';
}



