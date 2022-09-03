#include "PrimeNumber.h"
#include <iostream>

	//std::vector<int> initialNumbers;
	//std::vector<int> primes;
	//std::vector<int> nonPrimes;


void PrimeNumber::fillVectors() {
	primes.clear();
	nonPrimes.clear();

	for (int num : initialNumbers) {
		if (isPrime(num)) {
			primes.push_back(num);
		}
		else {
			nonPrimes.push_back(num);
		}
	}
}


	void PrimeNumber::createNumbersList(int itemsNumber) {
		for (int i = 0; i < itemsNumber; i++) {
			int number = i + 1;
			initialNumbers.push_back(number);
		}
	};

	void PrimeNumber::displayAll() {
		for (auto num : initialNumbers) {
			std::cout << num << ' ';
		}
	};

	
	void PrimeNumber::displayPrimes() {
		if (primes.size() > 0) {
			printPrimes();
		}
		else {
			fillVectors();
			printPrimes();
		}
	}

	void PrimeNumber::displayNonPrimes() {
		if (nonPrimes.size() > 0) {
			printNonPrimes();
		}
		else {
			fillVectors();
			printNonPrimes();
		}
	}
	/*void displayPrimes();
	void displayOthers();*/

