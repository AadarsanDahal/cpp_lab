//Program illustrating the arithmetic binary operator overloading
// Program illustrating the arithmetic binary operator overloading

#include <iostream>
using namespace std;

class Number {
    int a;

public:
    void setdata(int x) {
        a = x;
    }

    void show() {
        cout << "a = " << a << endl;
    }

    // Overload '+' operator
    Number operator+(Number obj) {
        Number temp;
        temp.a = a + obj.a;
        return temp;
    }
};

int main() {
    Number n1, n2, result;

    n1.setdata(10);
    n2.setdata(20);

    result = n1 + n2;

    cout << "Result after addition: ";
    result.show();

    return 0;
}
