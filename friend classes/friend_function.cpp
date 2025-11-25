#include <iostream>
using namespace std;

class Manager;
class Scientist;

// Friend function declaration
double calculateTax(const Manager &, const Scientist &);

class Manager {
private:
    double salary;

public:
    Manager(double s) : salary(s) {}

    friend double calculateTax(const Manager &, const Scientist &);
};

class Scientist {
private:
    double salary;

public:
    Scientist(double s) : salary(s) {}

    friend double calculateTax(const Manager &, const Scientist &);
};

// Friend function definition
double calculateTax(const Manager &m, const Scientist &s) {
    double taxManager = m.salary * 0.10;
    double taxScientist = s.salary * 0.08;
    return taxManager + taxScientist;
}

int main() {
    Manager m(60000);
    Scientist s(50000);

    cout << "Total Tax: ₹" << calculateTax(m, s) << endl;

    return 0;
}
