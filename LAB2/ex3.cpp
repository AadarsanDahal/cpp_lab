//Default arguments

#include <iostream>
using namespace std;

//default argunment 

void display(int a, int b = 10) {
    cout << "a: " << a << ", b: " << b << endl;
}

int main() {

    // Function with default arguments

    display(5); // b will take the default value of 10
    display(4,20); // will dispay 4 and 20
     
    return 0;
}