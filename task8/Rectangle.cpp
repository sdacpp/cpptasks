#include "Rectangle.h"

bool Rectangle::isSquare() {
	return x == y;
}


unsigned int Rectangle::getArea() {
	return x * y;
}