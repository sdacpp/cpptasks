#pragma once
#include <vector>
#include <iostream>

class OddEvenSorter
{

	const short int NUMBERS_TO_GENERATE = 50;
	const short int NUMBER_RANGE = 100;

	std::vector<int> evens;
	std::vector<int> odds;

	void generateRandomNumbers();

	bool isEven(int number) {
		return number % 2 == 0;
	}

	void fillOddAndEvens();

	void sortVectors();

	void initialize();


public:
	OddEvenSorter();
	~OddEvenSorter() {
	}

	void displayNumbers();

};

