// Program illustrating assignment operator overloading

#include <iostream>
using namespace std;

class Number {
    int a;

public:
    // Default constructor
    Number() {
        a = 0;
    }

    // Parameterized constructor
    Number(int x) {
        a = x;
    }

    // Overloading assignment operator
    void operator=(Number obj) {
        a = obj.a;   // we havent use this 
    }

    void show() {
        cout << "a = " << a << endl;
    }
};

int main() {
    Number n1(10);
    Number n2;

    cout << "Before assignment:" << endl;
    n2.show();

    n2 = n1;  // Uses overloaded '=' operator

    cout << "After assignment:" << endl;
    n2.show();

    return 0;
}
