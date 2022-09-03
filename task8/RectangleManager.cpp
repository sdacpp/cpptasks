#include "RectangleManager.h"
#include "RectangleGenerator.h";
#include <algorithm>
#include <iostream>

void RectangleManager::initialize() {
	generateRectangles();
}

void RectangleManager::generateRectangles() {
	// Utwórz wektor 100 prostokątów o losowych długościach boków z przedziału 0, 10 (użyj liczb całkowitych)
	for (int i = 0; i < NUMBER_OF_RECTANGLES; i++) {
		rectangles.push_back(RectangleGenerator::generateRectangle(MAX_RANGE));
	}
}

void RectangleManager::printRectangles() {
	// Wypisz wszystkie prostokąty(for_each + unary function)
	std::for_each(rectangles.begin(), rectangles.end(), [](auto rect) { rect.print(); });
};

size_t RectangleManager::countRectangleAreaBiggerThan(int area) {
	// Wypisz ile jest prostokątów o polu większym niż 50 (count_if)
	return std::count_if(rectangles.begin(), rectangles.end(),
		[&](Rectangle rect) {
			return rect.getArea() > area;
		}
	);
};
std::vector<Rectangle> RectangleManager::copySquares() {
	//Przekopiuj wszystkie prostkąty, które są kwadratami do drugiego vectora(copy_if) i go wypisz(for_each)
	std::vector<Rectangle> squares;
	std::copy_if(rectangles.begin(), rectangles.end(), std::back_inserter(squares), 
		[](Rectangle rect) {
			return rect.isSquare();
		});
	return squares;
};

void  RectangleManager::sortAreaDescending() {
	//  Posortuj vector prostokątów malejaco według pola powierzchni
	std::sort(rectangles.begin(), rectangles.end(), [](Rectangle rect1, Rectangle rect2) {
		return rect1.getArea() < rect2.getArea();
	});
};

void  RectangleManager::deleteInvalid() {
	// Usuń wszystkie prostokąty, które mają przynajmniej jeden bok równy 0
	rectangles.erase(std::remove_if(rectangles.begin(), rectangles.end(), [](auto rect) {
		int area = rect.getArea();
		return rect.getArea() == 0;
		}), rectangles.end());
