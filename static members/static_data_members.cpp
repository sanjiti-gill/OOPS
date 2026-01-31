#include <iostream>
using namespace std;

class Student {
    static int count;   // static data member

public:
    Student() {
        count++;
    }

    void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static member (outside class)
int Student::count = 0;

int main() {
    Student s1, s2, s3;
    s1.showCount();      // prints 3
    return 0;
}
