#include <iostream>
using namespace std;

class Sample {
    int x;

public:
    // Constructor
    Sample(int val) {
        x = val;
        cout << "Constructor called\n";
    }

    // Copy Constructor
    Sample(const Sample &obj) {
        x = obj.x;
        cout << "Copy constructor called\n";
    }

    // Assignment Operator Overloading
    Sample& operator=(const Sample &obj) {
        cout << "Assignment operator called\n";
        if (this != &obj) { // Avoid self-assignment
            x = obj.x;
        }
        return *this;
    }

    void display() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Sample obj1(10);     // Constructor
    Sample obj2 = obj1;  // Copy constructor
    Sample obj3(0);      // Constructor
    obj3 = obj1;         // Assignment operator

    cout << "\nobj1: ";
    obj1.display();

    cout << "obj2: ";
    obj2.display();

    cout << "obj3: ";
    obj3.display();

    return 0;
}
