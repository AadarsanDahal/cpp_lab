#include <iostream>
using namespace std;

class USD;  // Forward declaration

class NPR {
private:
    int rs;
    int paisa;

public:
    // Constructor
    NPR(int r = 0, int p = 0) {
        rs = r;
        paisa = p;
    }

    // Friend function for operator overloading
    friend NPR operator+(NPR, USD);

    // Display function
    void display() {
        cout << "Total Amount in NPR: " << rs << " Rs " << paisa << " Paisa" << endl;
    }
};

class USD {
private:
    int dollar;
    int cent;

public:
    // Constructor
    USD(int d = 0, int c = 0) {
        dollar = d;
        cent = c;
    }

    // Friend function for operator overloading
    friend NPR operator+(NPR, USD);
};

// Operator overloading using friend function
NPR operator+(NPR n, USD u) {
    // Convert USD to NPR
    int converted_rs = u.dollar * 133;
    int converted_paisa = u.cent * 60;

    // Add converted values to NPR
    int total_paisa = n.paisa + converted_paisa;
    int total_rs = n.rs + converted_rs;

    // Adjust paisa to be < 100
    total_rs += total_paisa / 100;
    total_paisa %= 100;

    return NPR(total_rs, total_paisa);
}

int main() {
    NPR npr_amount(100, 80);     // Rs 100.80
    USD usd_amount(2, 50);       // $2.50

    NPR total = npr_amount + usd_amount;

    total.display();

    return 0;
}
