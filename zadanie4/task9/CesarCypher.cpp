#include "CesarCypher.h"

std::string CesarCypher::cypher(std::string text, int secretValue) {
	std::string secretText = "";
	for (int i = 0; text[i] != '\0'; i++) {
		char letter = text[i];

		if (letter == ' ') {
			secretText += letter;
			continue;
		}

		if (letter >= 'a' && letter <= 'z') {
			letter = letter + secretValue;
			if (letter > 'z') {
				letter = letter - 'z' + 'a' - 1;
			}
			secretText += letter;
		}

		if (letter >= 'A' && letter <= 'Z') {
			letter = letter + secretValue;
			if (letter > 'Z') {
				letter = letter - 'Z' + 'A' - 1;
			}
			secretText += letter;
		}
	}

	return secretText;
}


std::string CesarCypher::decypher(std::string text, int secretValue) {
	std::string secretText = "";
	for (int i = 0; text[i] != '\0'; i++) {
		char letter = text[i];

		if (letter == ' ') {
			secretText += letter;
			continue;
		}

		if (letter >= 'a' && letter <= 'z') {
			letter = letter - secretValue;
			if (letter < 'a') {
				letter = letter + 'z' - 'a' + 1;
			}
			secretText += letter;
		}

	

		if (letter >= 'A' && letter <= 'Z') {
		
			letter = letter - secretValue;
			if (letter < 'A') {
				letter = letter + 'Z' - 'A' + 1;
			}
			secretText += letter;
		}
	}

	return secretText;
}
