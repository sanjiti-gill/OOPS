#include <iostream>
using namespace std;

class Counter {
    static int value;

public:
    static void increment() {   // static member function
        value++;
    }

    static void show() {        // static member function
        cout << "Counter Value: " << value << endl;
    }
};

int Counter::value = 0;

int main() {
    Counter::increment();
    Counter::increment();
    Counter::show();   // Output: Counter Value: 2
    return 0;
}
