#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number() { x = 0; }
    Number(int a) { x = a; }

  
    // Prefix ++
    void operator++() {
        ++x;
    }

    // Postfix ++
    void operator++(int) {
        x++;
    }

    // + operator 
    Number operator+(Number obj) {
        Number temp;
        temp.x = x + obj.x;
        return temp;
    }

    // < operator 
    bool operator<(Number obj) {
        return x < obj.x;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Number n1, n2, n3;
    int choice, val1, val2;

    cout << "Enter value for first number: ";
    cin >> val1;
    cout << "Enter value for second number: ";
    cin >> val2;

    n1 = Number(val1);
    n2 = Number(val2);

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Prefix Increment (++n1)\n";
        cout << "2. Postfix Increment (n1++)\n";
        cout << "3. Add two numbers (n1 + n2)\n";
        cout << "4. Compare (n1 < n2)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                ++n1;
                cout << "After prefix increment: ";
                n1.display();
                break;

            case 2:
                n1++;
                cout << "After postfix increment: ";
                n1.display();
                break;

            case 3:
                n3=n1 + n2;
                cout << "After addition: ";
                n3.display();
                break;

            case 4:
                if (n1<n2)
                    cout << "n1 is smaller than n2\n";
                else
                    cout << "n1 is NOT smaller than n2\n";
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
