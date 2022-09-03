#include <iostream>
#include <string>
#include "PrimeNumber.h"
int main() {
	PrimeNumber pn;

	pn.createNumbersList(1000);
	pn.displayPrimes();
	pn.displayNonPrimes();

	return 0;
}