#include <iostream>
#include <algorithm>
#include "RectangleManager.h";

/*
Zadanie 8
Klasy: Rectangle(przechowuje długości boków, wylicza pole, isSquare()), 
RectangleGenerator(Klasa genreująca losowy prostokąt o boku z podanego przedziału),
RectangleManger(tutaj faktycznie implementujemy zadania)

Utwórz wektor 100 prostokątów o losowych długościach boków z przedziału 0, 10 (użyj liczb całkowitych)
a) void printRectangles() - Wypisz wszystkie prostokąty (for_each + unary function)
b) size_t countRectangleBiggerThen(int area ) - Wypisz ile jest prostokątów o polu większym niż 50 (count_if)
c) std::vector copyRectangles() - Przekopiuj wszystkie prostkąty, które są kwadratami do drugiego vectora (copy_if) i go wypisz (for_each)
d) void sortAreaDescending() - Posortuj vector prostokątów malejaco według pola powierzchni
e) void deleteInvalid() Usuń wszystkie prostokąty, które mają przynajmniej jeden bok równy 0
*/

int main() {

	RectangleManager rectangleManager;
	const unsigned short int AREA_SIZE = 50;
	size_t count = rectangleManager.countRectangleAreaBiggerThan(AREA_SIZE);
	std::cout << "Number of bigger areas: " << count << std::endl;
	auto squares = rectangleManager.copySquares();

	//rectangleManager.printRectangles();
	rectangleManager.sortAreaDescending();
	rectangleManager.printRectangles();

	rectangleManager.deleteInvalid();

	rectangleManager.printRectangles();

	

	return 0;
}