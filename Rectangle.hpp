#ifndef Rectangle_h
#define Rectangle_h

#include "Shape.hpp"

class Rectangle : public Shape {
public:
    Rectangle(int x_coord, int y_coord, int lengthInput, int widthInput);
    void draw();
    void print();
private:
    int length;
    int width;
};

#endif /* Rectangle_h */
