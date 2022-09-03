#pragma once

class Rectangle
{
private:
	uint8_t  _x;
	uint8_t  _y;

public:
	Rectangle(uint8_t x, uint8_t y)
		: _x(x), _y(y)
	{
	}

	~Rectangle() {};

	void print();
	bool isSquare();
	unsigned int getArea();
};
