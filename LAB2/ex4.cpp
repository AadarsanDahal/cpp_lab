#include <iostream>
using namespace std;

// Function that adds two variables passed by reference and returns the result by reference
int& add(int &a, int &b) {
    static int result;  // Must be static to safely return by reference
    result = a + b;
    return result;
}

int main() {
    int x = 5, y = 7;

    // Call the function
    int &sum = add(x, y);

    cout << "Sum is: " << sum << endl;

    return 0;
}
