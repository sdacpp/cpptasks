#include "RectangleGenerator.h"
#include <cstdlib>

RectangleGenerator::RectangleGenerator(int min, int max)
	: device(), engine(device()), dist(min, max)
{
}

Rectangle RectangleGenerator::generateRectangle() {
	unsigned short int x = dist(engine);
	unsigned short int y = dist(engine);

	return Rectangle(x, y);
}