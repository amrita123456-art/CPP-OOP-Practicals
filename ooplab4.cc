
#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void getPerson() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person {
public:
    int rollNo;

    void getStudent() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class GraduateStudent : public Student {
public:
    string research;

    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll No: " << rollNo;
        cout << "\nResearch Area: " << research;
    }
};

int main() {
    GraduateStudent g;

    g.getPerson();
    g.getStudent();

    cout << "Enter research area: ";
    cin >> g.research;

    g.display();

    return 0;
}
