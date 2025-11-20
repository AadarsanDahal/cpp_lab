//How can you return objects from function. Show the concept
// with a suitable program.

#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) {  // Constructor with default value
        value = v;
    }

    void show() {
        cout << "Value: " << value << endl;
    }

    // Function to add two Number objects and return the result as a new object
    Number add(Number n) {
        Number temp;
        temp.value = value + n.value;
        return temp;  // returning object
    }
};

int main() {
    Number n1(10), n2(20);

    Number n3 = n1.add(n2);  // add() returns an object

    n3.show();

    return 0;
}
