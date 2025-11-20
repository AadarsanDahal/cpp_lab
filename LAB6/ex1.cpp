#include <iostream>
using namespace std;

// Function template with multiple arguments
template <typename T1, typename T2>
void showSum(T1 a, T2 b) {
    cout << "Sum = " << a + b << endl;
}

int main() {
    int x = 5;
    double y = 6.7;

    cout << "Adding int and double:" << endl;
    showSum(x, y); // int + double

    float a = 3.5f;
    long b = 10;

    cout << "Adding float and long:" << endl;
    showSum(a, b); // float + long

    return 0;
}
