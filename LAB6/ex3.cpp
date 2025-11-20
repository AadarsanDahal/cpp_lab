#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw "Division by zero is not allowed!";
        }
        float result = (float)a / b;
        cout << "Result of a / b = " << result << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    // cout << "Program continues after exception handling." << endl;
    return 0;
}
