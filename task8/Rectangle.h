#pragma once

class Rectangle
{
private:
	__int16  _x;
	__int16  _y;

public:
	Rectangle(__int16 x, __int16 y)
		: _x(x), _y(y)
	{
	}

	~Rectangle() {};

	void print();
	bool isSquare();
	unsigned int getArea();
};
