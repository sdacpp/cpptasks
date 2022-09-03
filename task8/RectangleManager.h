#pragma once
#include <vector>
#include "Rectangle.h"

class RectangleManager
{
private:
	const __int16 MAX_RANGE = 10;
	const __int16 NUMBER_OF_RECTANGLES = 100;
	std::vector<Rectangle> rectangles;
	std::vector<Rectangle> squares;

	void initialize();
	void generateRectangles();

public:
	RectangleManager() {
		initialize();
	}
	~RectangleManager() {};

	void printRectangles();
	size_t countRectangleAreaBiggerThan(int area);
	std::vector<Rectangle> copySquares();
	void sortAreaDescending();
	void deleteInvalid();
};

