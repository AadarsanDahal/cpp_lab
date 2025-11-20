#include <iostream>
using namespace std;

class Employee {
    int id;
    static int count;  // Static data member to count number of employees

public:
    Employee() {
        count++;       // Increment count whenever an object is created
        id = count;
    }

    void show() {
        cout << "Employee ID: " << id << endl;
    }

    static int getCount() {   // Static function to access static data member
        return count;
    }
};

// Initialize static data member outside class
int Employee::count = 0;

int main() {
    cout << "Number of employees before creation: " << Employee::getCount() << endl;

    Employee e1, e2, e3;

    cout << "Number of employees after creation: " << Employee::getCount() << endl;

    e1.show();
    e2.show();
    e3.show();

    return 0;
}
