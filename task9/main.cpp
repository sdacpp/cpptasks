#include <iostream>
#include <string>
#include "CesarCypher.h"
int main() {
	CesarCypher cyp;
	std::string secret = cyp.cypher("my very secret text", 2);
	std::string decoded = cyp.decypher("oa xgta ugetgv vgzv", 2);
	//std::cout << secret << std::endl;
	std::cout << decoded << std::endl;

	
	return 0;
}