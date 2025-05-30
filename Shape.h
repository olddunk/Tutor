#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
using namespace std;

class Shape {
private:
    string color;
public:
    Shape();
    string getColor() const;
    void setColor(string color);
    virtual double getVolume() const = 0;
};

#endif
