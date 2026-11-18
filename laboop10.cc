
#include <iostream>
#include <stdexcept>
using namespace std;

class BankingException : public runtime_error {
public:
    BankingException(string msg) : runtime_error(msg) {}
};

class InvalidAmount : public BankingException {
public:
    InvalidAmount() : BankingException("Invalid transaction amount!") {}
};

class InsufficientBalance : public BankingException {
public:
    InsufficientBalance() : BankingException("Insufficient balance!") {}
};

class BankAccount {
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void withdraw(double amount) {
        if (amount <= 0)
            throw InvalidAmount();

        if (amount > balance)
            throw InsufficientBalance();

        balance -= amount;
        cout << "Withdrawal successful!" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(5000);

    try {
        double amount;

        cout << "Enter withdrawal amount: ";
        cin >> amount;

        account.withdraw(amount);
    }

    catch (InvalidAmount &e) {
        cout << "Error: " << e.what() << endl;
    }

    catch (InsufficientBalance &e) {
        cout << "Error: " << e.what() << endl;
    }

    catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
