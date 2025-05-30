#include <iostream>
#include <iomanip>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
using namespace std;

void display(Shape& s) {
    cout << "顏色：" << s.getColor() << endl;
    cout << fixed << setprecision(1) << "體積：" << s.getVolume()<< endl;
}

int main()
{   string color1, color2;
    double radius, edge;
    cin >> radius;
    cin >> color1;
    cin >> edge;
    cin >> color2;
    
    Circle c1(radius, color1);
    cout << "=== [圓形] ===" << endl;
    cout << "半徑：" << c1.getRadius() << endl;
    display(c1);
    // cout << "顏色：" << c1.getColor() << endl;
    // cout << fixed << setprecision(1) << "體積：" << c1.getVolume()<< endl;
    
    Square s1(edge, color2);
    cout << "=== [正方形] ===" << endl;
    cout << "邊長：" << s1.getEdge() << endl;
    display(s1);
    // cout << "顏色：" << s1.getColor() << endl;
    // cout << fixed << setprecision(1) << "體積：" << s1.getVolume()<< endl;

    return 0;
}
