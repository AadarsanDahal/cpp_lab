#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function
    virtual void display() {
        cout << "Display function of Base class." << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Display function of Derived class." << endl;
    }
};

int main() {
    Base* basePtr;
    Derived d;

    basePtr = &d;

    // Calls Derived's display() due to virtual function
    basePtr->display();

    return 0;
}
