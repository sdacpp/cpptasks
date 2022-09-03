#pragma once
#include <string>

class CesarCypher
{
public:
	std::string cypher(std::string text, int secretValue);
	std::string decypher(std::string text, int secretValue);
};

