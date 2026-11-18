
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real,
                       imag + c.imag);
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5), c3;

    cout << "Integer Addition: " << c1.add(5, 10);
    cout << "\nFloat Addition: " << c1.add(2.5f, 3.5f);

    c3 = c1 + c2;

    cout << "\nComplex Addition: ";
    c3.display();

    return 0;
}
