// Programs to illustrate the use of:
// Function overloading -> meaning  same name of function but different parameters


#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum of integers: " << a + b << endl;
}

void add(float a, float b) {

    cout << "Sum of floats: " << a + b << endl;
}

int main() {

    int x = 5, y = 10;
    
    float m = 5.5f, n = 10.5f;

    add(x, y); // Calls the integer version
    add(m, n); // Calls the float version
     
    return 0;
}