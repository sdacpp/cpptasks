#pragma once

class Rectangle
{
private:
	unsigned short int  _x;
	unsigned short int  _y;

public:
	Rectangle(unsigned short int x, unsigned short int y)
		: _x(x), _y(y)
	{
	}

	~Rectangle() {};

	void print();
	bool isSquare();
	unsigned int getArea();
};
