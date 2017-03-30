#ifndef Circle_h
#define Circle_h

#include "Shape.hpp"

class Circle : public Shape {
public:
    Circle(int x_coord, int y_coord, int radiusInput);
    void draw();
    void print();
private:
    int radius;
};

#endif /* Circle_h */
