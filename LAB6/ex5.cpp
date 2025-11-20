#include <iostream>
using namespace std;

void checkAge(int age) {
    if (age < 18) {
        // Throwing an exception with an integer argument (age)
        throw age;
    } else {
        cout << "Access granted. Age is " << age << "." << endl;
    }
}

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try {
        checkAge(age);
    }
    catch (int e) {
        cout << "Exception caught: Age " << e << " is less than 18. Access denied." << endl;
    }

    // cout << "Program continues after exception handling." << endl;
    return 0;
}
