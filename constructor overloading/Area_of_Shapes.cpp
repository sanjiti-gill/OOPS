#include <iostream>
using namespace std;

class Area {
    float areaValue; 

public:
    // Constructor for Circle
    Area(float radius) {
        areaValue = 3.14 * radius * radius;
        cout << "Area of Circle = " << areaValue << endl;
    }

    // Constructor for Rectangle
    Area(float length, float breadth) {
        areaValue = length * breadth;
        cout << "Area of Rectangle = " << areaValue << endl;
    }

    // Constructor for Triangle
    Area(float base, float height, int) { 
        areaValue = 0.5 * base * height;
        cout << "Area of Triangle = " << areaValue << endl;
    }
};

int main() {
    float r, l, b, base, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    Area circle(r);  

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    Area rectangle(l, b);  

    cout << "Enter base and height of triangle: ";
    cin >> base >> h;
    Area triangle(base, h, 0); 

    return 0;
}
