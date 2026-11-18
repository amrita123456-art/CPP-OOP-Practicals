
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

protected:
    int accountNo;

public:
    string name;

    void setDetails(string n, int acc, double b) {
        name = n;
        accountNo = acc;
        balance = b;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;

    b.setDetails("Amrita", 101, 5000);
    b.display();

    return 0;
}
