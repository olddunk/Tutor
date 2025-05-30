#include "Square.h"

Square::Square() {
    edge = 0;
}

Square::Square(double e, string c) {
    setColor(c);
    setEdge(e);
}

double Square::getEdge() const {
    return edge;
}

void Square::setEdge(double e) {
    edge = e;
}

double Square::getArea() const {
    return edge * edge;
}

double Square::getVolume() const {
    return edge * edge * edge;
}
