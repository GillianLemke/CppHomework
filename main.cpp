// Gillian Lemke
#include <stdio.h>
#include <iostream>
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Picture.hpp"
#include <string>

using namespace std;

/*void computeGPA(Student* s){
    // compute s's GPA
    s->greet();
    
    cout <<" my gpa is " << 4.0 << endl;
}*/

int main(int argc, const char * argv[]) {
	// create values of x, y (and their pointers) for the first shape
    int x = 17;
    int y = 5;
    int* xP = &x;
    int* yP = &y;
    
    // create values of x, y (and their pointers) for the second shape
    int x2 = 3;
    int y2 = 13;
    int* x2P = &x2;
    int* y2P = &y2;
    
    // create values of x, y (and their pointers) for the third shape
    int x3 = 15;
    int y3 = 7;
    int* x3P = &x3;
    int* y3P = &y3;
    
    // create the objects with the already declared values of x, y
    Shape shape1(x, y);
    Shape shape2(x2, y2);
    Shape shape3(x3, y3);
    
    cout << "\nUSING ORIGINAL SHAPE OBJECTS" << endl;
    // call the draw method for each of the three shape objects
    cout << "Calling the draw() method:" << endl;
    shape1.draw();
    shape2.draw();
    shape3.draw();
    
    // call the print method for each of the three shape objects
    cout << "Calling the print() method:" << endl;
    shape1.print();
    shape2.print();
    shape3.print();    
    
    // create pointers to each of the objects
    Shape* a = &shape1;
    Shape* b = &shape2;
    Shape* c = &shape3;
    
    cout << "\nUSING POINTERS" << endl;
    // call the draw method for each of the three shape objects (with their pointers)
    cout << "Calling the draw() method:" << endl;
    (*a).draw();
    (*b).draw();
    (*c).draw();
    
    // call the print method for each of the three shape objects (with their pointers)
    cout << "Calling the print() method:" << endl;
    (*a).print();
    (*b).print();
    (*c).print();
    
    cout << "\nCIRCLE" << endl;
    // BEGINNING OF PROBLEM 2 #2
    // define coordinates and radius of the circle
    int x_circle = 2;
    int y_circle = 3;
    int radius = 5;
    
    // create circle object
    Circle circle1(x_circle, y_circle, radius);
    
    // draw and print circle object
    circle1.draw();
    circle1.print();
    
    cout << "\nRECTANGLE" << endl;
    // BEGINNING OF PROBLEM 2 #3
    // define coordinates, length, and width of the rectangle
    int x_rectangle = 12;
    int y_rectangle = 5;
    int length = 8;
    int width = 5;
    
    // create circle object
    Rectangle rectangle1(x_rectangle, y_rectangle, length, width);
    
    // draw and print circle object
    rectangle1.draw();
    rectangle1.print();
    
    // create picture object
    Picture picture1("new picture", &shape1, &circle1, &rectangle1);
    
    // print the name of the picture to indicate which portion of the 
    // code is executing
    cout << "\nDrawing picture: " << name << endl;
    
    // draw and print the picture object
    picture1.draw();
    picture1.print();
    
    
}
