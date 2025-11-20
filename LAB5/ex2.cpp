#include <iostream>
using namespace std;

class Number {
    int num1, num2;

public:
    void setData(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Declare friend function
    friend int calculateSum(Number obj);
};

// Friend function definition
int calculateSum(Number obj) {
    return obj.num1 + obj.num2;
}

int main() {
    Number n;
    n.setData(10, 20);

    int sum = calculateSum(n);
    cout << "The sum of the two numbers is: " << sum << endl;

    return 0;
}
