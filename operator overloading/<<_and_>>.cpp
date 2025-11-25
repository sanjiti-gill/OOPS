#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point() : x(0), y(0) {}

    // Friend function to overload >>
    friend istream& operator>>(istream& in, Point& p) {
        cout << "Enter x and y: ";
        in >> p.x >> p.y;
        return in;
    }

    // Friend function to overload <<
    friend ostream& operator<<(ostream& out, const Point& p) {
        out << "Point(" << p.x << ", " << p.y << ")";
        return out;
    }
};

int main() {
    Point p;

    cin >> p;      // Calls overloaded >>
    cout << p;     // Calls overloaded <<

    return 0;
}
