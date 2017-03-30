#ifndef Picture_hpp
#define Picture_hpp
#include <string>
#include <stdio.h>
#include "Shape.hpp"

using namespace std; 

class Picture {
	public :
		Picture(string nameParam, Shape* shapePointer, Shape* rectanglePointer, Shape* circlePointer);
		void draw();
		void print();
	private:
		string name;
		Shape* shape;
		Shape* rectangle;
		Shape* circle;
};

#endif 

