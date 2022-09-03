#pragma once

#include "Rectangle.h"
#include <stdio.h>;
#include <random>;
#include <algorithm>;

class RectangleGenerator
{
private:
	std::default_random_engine engine;
	std::random_device device;
	std::uniform_int_distribution<unsigned short int> dist;

public:
	RectangleGenerator(int min, int max);

	Rectangle generateRectangle();
};

