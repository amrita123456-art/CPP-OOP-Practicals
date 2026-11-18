
#include <iostream>
using namespace std;

int main() {
    int age;
    float marks;
    const float PI = 3.14;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    int a = 10, b = 5;

    cout << "\nAge: " << age;
    cout << "\nMarks: " << marks;
    cout << "\nConstant PI: " << PI;

    cout << "\nAddition: " << a + b;
    cout << "\nSubtraction: " << a - b;
    cout << "\nMultiplication: " << a * b;
    cout << "\nDivision: " << a / b;

    return 0;
}
