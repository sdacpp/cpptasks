#pragma once
#include <iostream>
#include <string>
#include <algorithm>

class StringConverter {
public:
	static std::string toCamelCase(std::string inputString) {

    for (int i = 0; i < inputString.size(); i++) {
        char currentLetter = std::tolower(inputString[i]);
        char nextLetter = inputString[i+1];
        
        if (currentLetter == ' ') {
            inputString[i] = '\0';
            inputString[i+1] = std::toupper(inputString[i+1]);
        }
    }
    
 
    return inputString;
}

	static std::string toSnakeCase(std::string inputString) {
    for (int i = 0; i < inputString.size(); i++) {
        inputString[i] = std::tolower(inputString[i]);
          if (inputString[i] == ' ') {
            inputString[i] = '_';
        }
    }
    
 
    return inputString;
	}
};
