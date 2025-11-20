//Program illustrating binary comparison operator overloading
// Program illustrating binary comparison operator overloading

#include <iostream>
using namespace std;

class Number {
    int a;

public:
    void setdata(int x) {
        a = x;
    }

    // Overload '==' operator
    bool operator==(Number obj) {
        if (a == obj.a)

        {
                return true;    /* code */
        }
        
        else{
            return false;
        }
    }
};

int main() {
    Number n1, n2;

    n1.setdata(10);
    n2.setdata(10);

    if (n1 == n2) {
        cout << "Both objects are equal." << endl;
    } else {
        cout << "Objects are not equal." << endl;
    }

    return 0;
}
