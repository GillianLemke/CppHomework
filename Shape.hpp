#ifndef Shape_hpp
#define Shape_hpp
#include <string>
#include <stdio.h>
using namespace std; 

class Shape {
	public :
		Shape();
		Shape(int x_coord, int y_coord);
		virtual void draw();
		void print();
	protected:
		int x;
		int y;
};

#endif 