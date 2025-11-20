#include <iostream>
using namespace std;

class NPR {
private:
    int rs;
    int paisa;

public:
    // Constructor to initialize values
    NPR(int r = 0, int p = 0) {
        rs = r;
        paisa = p;
    }

    // Friend function to overload the '+' operator
    friend NPR operator+(NPR, NPR);

    // Function to display result
    void display() {
        cout << rs << " Rs " << paisa << " Paisa" << endl;
    }
};

// Operator overloading using friend function
NPR operator+(NPR a, NPR b) {
    NPR temp;
    temp.paisa = a.paisa + b.paisa;
    temp.rs = a.rs + b.rs;

    // Convert paisa to rs if >= 100
    if (temp.paisa >= 100) {
        temp.rs += temp.paisa / 100;
        temp.paisa = temp.paisa % 100;
    }

    return temp;
}

int main() {
    NPR obj1(10, 75);  // Rs 10.75
    NPR obj2(20, 50);  // Rs 20.50

    NPR result = obj1 + obj2;  // Using overloaded '+' operator

    cout << "Total Amount: ";
    result.display();

    return 0;
}
