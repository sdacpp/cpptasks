#pragma once
#include <vector>
#include <iostream>

class PrimeNumber
{
private:
	std::vector<int> initialNumbers;
	std::vector<int> primes;
	std::vector<int> nonPrimes;
	bool isPrime(int number) {
		if (number < 2) return false;

		for (int i = 2; i * i <= number; i++)
			if (!(number % i)) return false;

		return true;
	}

	void fillVectors();

	void printEndLine() {
		std::cout << "\n---------------------" << std::endl;
	}

	void printPrimes() {
		std::cout << "PRIMES: " << std::endl;
		for (int prime : primes) {
			std::cout << prime << ' ';
		}
		printEndLine();
	}

	void printNonPrimes() {
		std::cout << "NON PRIMES: " << std::endl;
		for (int number : nonPrimes) {
			std::cout << number << ' ';
		}
		printEndLine();

	}

public:
	void createNumbersList(int itemsNumber);

	void displayPrimes();
	void displayNonPrimes();
	void displayAll();
};

