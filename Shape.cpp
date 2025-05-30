#include "Shape.h"


Shape::Shape() {
    color = "";
}

void Shape::setColor(string c) {
    color = c;
}

string Shape::getColor() const {
    return color;
}

