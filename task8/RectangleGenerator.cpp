#include "RectangleGenerator.h"
#include <cstdlib>
#include <algorithm> 
#include <random>

Rectangle RectangleGenerator::generateRectangle(const uint8_t range) {
	std::random_device r;
	std::default_random_engine defEngine(r()); 
	std::uniform_int_distribution<uint8_t> intDistro(0, range);

	uint8_t x = intDistro(defEngine);
	uint8_t  y = intDistro(defEngine);

	return Rectangle(x, y);
}