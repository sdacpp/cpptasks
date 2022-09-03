#include "Rectangle.h"
#include <iostream>

void Rectangle::print() {
	std::cout << "Rectangle: x = " << _x << ", y = " << _y << std::endl;
} 

bool Rectangle::isSquare() {
	return _x == _y;
}


unsigned int Rectangle::getArea() {
	return _x * _y;
}