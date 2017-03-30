#include "Shape.hpp"
#include <iostream>

using namespace std;

Shape::Shape() {
	x = 10;
	y = 10;
}

Shape::Shape(int x_coord, int y_coord) {
    x = x_coord;
    y = y_coord;
}

void Shape::draw() {
    cout << "Drawing a shape with coordinates (" << x << "," << y << ")" << endl;
}

void Shape::print() {
    cout << "Printing a shape with coordinates (" << x << "," << y << ")" << endl;
}
