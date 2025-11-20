#include <iostream>
using namespace std;

class Circle {
    float radius;
    float area;

public:
    void getdata() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }

    void calcArea() {
        area = 3.14159f * radius * radius;  // Area = πr²
    }

    void display() {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area << endl;
    }
};

int main() {
    Circle c;

    c.getdata();
    c.calcArea();
    c.display();

    return 0;
}
