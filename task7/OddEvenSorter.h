#pragma once
#include <vector>
#include <iostream>

class OddEvenSorter
{

	const short int NUMBERS_TO_GENERATE = 50;
	const short int NUMBER_RANGE = 100;

	std::vector<int> numbers;
	std::vector<int> odds;

	void generateRandomNumbers();
	void sortVectors();
	void initialize();
	void mergeVectors();


public:
	OddEvenSorter();
	~OddEvenSorter();

	void displayNumbers();
};

