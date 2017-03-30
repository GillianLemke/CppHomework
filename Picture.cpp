#include <stdio.h>
#include <iostream>
#include "Picture.hpp"
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include <string>

using namespace std;

Picture::Picture(string nameParam, Shape* shapePointer, Shape* rectanglePointer, Shape* circlePointer) {
    name = nameParam;
    shape = shapePointer;
    rectangle = rectanglePointer;
    circle = circlePointer;
}

void Picture::draw() {
    shape->draw();
    rectangle->draw();
    circle->draw();
}

void Picture::print() {
	shape->print();
	rectangle->print();
	circle->print();
}
