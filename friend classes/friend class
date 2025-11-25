#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double bal) : balance(bal) {}

    // Grant special access to Inspector
    friend class Inspector;
};

class Inspector {
public:
    void audit(const BankAccount &acc) {
        cout << "Auditing Account Balance: ₹" << acc.balance << endl;
    }
};

int main() {
    BankAccount userAccount(12500.75);
    Inspector govtInspector;

    govtInspector.audit(userAccount);

    return 0;
}
