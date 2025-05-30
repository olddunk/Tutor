#include "Circle.h"

Circle::Circle() {
    radius = 0;
}

Circle::Circle(double r, string c) {
    setColor(c);
    setRadius(r);
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getArea() const {
    return radius * radius * 3.14;
}

double Circle::getVolume() const {
    return radius * radius * radius * 3.14;
}
