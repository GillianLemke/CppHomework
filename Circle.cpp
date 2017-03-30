#include <stdio.h>
#include <iostream>
#include "Circle.hpp"

using namespace std;

Circle::Circle(int x_coord, int y_coord, int radiusInput) : Shape(x_coord, y_coord) {
    radius = radiusInput;
}

void Circle::draw() {
    cout << "Drawing a circle with coordinates (" << x << "," << y << ") with radius " << radius << endl;
}

void Circle::print() {
    cout << "Printing a circle with coordinates (" << x << "," << y << ") with radius " << radius << endl;
}
