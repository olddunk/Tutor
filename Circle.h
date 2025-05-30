#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <iostream>

class Circle: public Shape {
private:
    double radius;
public:
    Circle();
    Circle(double r, string c);
    double getRadius() const;
    void setRadius(double r);
    double getArea() const;
    double getVolume() const override;
};


#endif
