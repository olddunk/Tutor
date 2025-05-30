#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"
#include <iostream>

class Square: public Shape {
private:
    double edge;
public:
    Square();
    Square(double l, string c);
    double getEdge() const;
    void setEdge(double r);
    double getArea() const;
    double getVolume() const override;
};


#endif
