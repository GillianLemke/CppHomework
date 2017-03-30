#include <stdio.h>
#include <iostream>
#include "Rectangle.hpp"

using namespace std;

Rectangle::Rectangle(int x_coord, int y_coord, int lengthInput, int widthInput) : Shape(x_coord, y_coord) {
    length = lengthInput;
    width = widthInput;
}

void Rectangle::draw() {
    cout << "Drawing a rectangle with coordinates (" << x << "," << y << "), l = " << length << ", w = " << width << "\"" << endl;
}

void Rectangle::print() {
    cout << "Printing a rectangle with coordinates (" << x << "," << y << "), l = " << length << ", w = " << width << "\"" << endl;
}
