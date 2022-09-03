#include "RectangleGenerator.h"
#include <cstdlib>
#include <algorithm> 
#include <random>

Rectangle RectangleGenerator::generateRectangle(const __int16 range) {
	std::random_device r;
	std::default_random_engine defEngine(r()); 
	std::uniform_int_distribution<__int16> intDistro(0, range);

	__int16 x = intDistro(defEngine);
	__int16  y = intDistro(defEngine);

	return Rectangle(x, y);
}