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

    // Friend function declaration
    friend void addNPR(NPR, NPR);
};

// Friend function definition
void addNPR(NPR a, NPR b) {
    int totalPaisa = a.paisa + b.paisa;
    int totalRupees = a.rs + b.rs + (totalPaisa / 100);
    totalPaisa = totalPaisa % 100;

    cout << "Total Amount: " << totalRupees << " Rs " << totalPaisa << " Paisa" << endl;
}

int main() {
    NPR obj1(10, 75);  // Rs 10.75
    NPR obj2(20, 50);  // Rs 20.50

    addNPR(obj1, obj2);  // Calls friend function

    return 0;
}
