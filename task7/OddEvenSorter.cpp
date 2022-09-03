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

bool isEven(int number) {
	return number % 2 == 0;
}

void OddEvenSorter::generateRandomNumbers() {
	srand((unsigned)time(NULL));

	for (int i = 0; i < NUMBERS_TO_GENERATE; ++i) {
		int number = (rand() % NUMBER_RANGE);
		if (isEven(number)) {
			numbers.push_back(number);
		}
		else {
			odds.push_back(number);
		}
	}
}

bool sortAscending(int i, int j) { return (i < j); }

void OddEvenSorter::mergeVectors() {
	numbers.insert(numbers.end(), odds.begin(), odds.end());
}

void OddEvenSorter::sortVectors() {
	std::sort(numbers.begin(), numbers.end(), sortAscending);
	std::sort(odds.begin(), odds.end(), sortAscending);

	mergeVectors();
}

void OddEvenSorter::displayNumbers() {
	for (auto num : numbers) std::cout << num << ' ';
}



