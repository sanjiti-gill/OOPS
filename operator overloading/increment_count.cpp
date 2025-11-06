#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter() { count = 0; }              
    Counter(int c) { count = c; }          

    // Prefix increment
    void operator++() {
        ++count;
    }

    // Postfix increment
    void operator++(int) {
        count++;
    }

    void display() {
        cout << "Count = " << count << endl;
    }
};

int main() {
    Counter c1;
    cout << "Initial ";
    c1.display();

    ++c1;   // prefix
    cout << "After prefix ++: ";
    c1.display();

    c1++;   // postfix
    cout << "After postfix ++: ";
    c1.display();

    return 0;
}
