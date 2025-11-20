// Program illustrating the prefix and postfix unary operator overloading

#include <iostream>
using namespace std;

class Count {
    int a;

public:
    void setdata(int n) {
        a = n;
    }

    void show() {
        cout << "a = " << a << endl;
    }

    // Prefix ++ overloading
    Count operator++() {
        Count temp;
        temp.a = ++a;
        return temp;
    }

    // Postfix ++ overloading
    Count operator++(int) {
        Count temp;
        temp.a = a++;
        return temp;
    }
};

int main() {
    Count c1, c2;

    c1.setdata(5);

    cout << "Original value: ";
    c1.show();

    c2 = ++c1; // Prefix
    cout << "After prefix ++: ";
    c2.show();

    c2 = c1++; // Postfix
    cout << "After postfix ++: ";
    c2.show();

    cout << "Final value of c1: ";
    c1.show();

    return 0;
}
