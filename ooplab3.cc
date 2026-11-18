
#include <iostream>
#include <utility>
using namespace std;

class Demo {
    int *p;

public:
    Demo() {
        p = new int(0);
        cout << "Default Constructor\n";
    }

    Demo(int x) {
        p = new int(x);
        cout << "Parameterized Constructor\n";
    }

    Demo(const Demo &d) {
        p = new int(*d.p);
        cout << "Copy Constructor\n";
    }

    Demo(Demo &&d) noexcept {
        p = d.p;
        d.p = nullptr;
        cout << "Move Constructor\n";
    }

    Demo& operator=(const Demo &d) {
        if (this != &d) {
            *p = *d.p;
        }
        return *this;
    }

    Demo& operator=(Demo &&d) noexcept {
        if (this != &d) {
            delete p;
            p = d.p;
            d.p = nullptr;
        }
        return *this;
    }

    ~Demo() {
        delete p;
        cout << "Destructor\n";
    }

    void display() {
        if (p)
            cout << "Value: " << *p << endl;
    }
};

int main() {
    Demo a;
    Demo b(100);
    Demo c(b);
    Demo d(move(b));

    a = c;
    d.display();

    return 0;
}
