#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw "Error: Division by zero!";
        }
        else if (denominator < 0) {
            throw -1;  // Throw int for negative denominator
        }

        double result = static_cast<double>(numerator) / denominator;
        cout << "Result = " << result << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }
    catch (int errorCode) {
        cout << "Error: Denominator cannot be negative. Code: " << errorCode << endl;
    }

    // cout << "Program continues after exception handling." << endl;
    return 0;
}
