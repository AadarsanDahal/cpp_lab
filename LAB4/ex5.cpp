#include <iostream>
using namespace std;

class Feet;  // Forward declaration

class Distance {
    float meters;

public:
    // 1. Basic to User-defined conversion (constructor)
    Distance(float m = 0) {
        meters = m;
    }

    void display() {
        cout << meters << " meters" << endl;
    }

    // 2. User-defined to basic conversion
    operator float() {
        return meters;
    }

    // 3. User-defined to User-defined conversion
    Distance(const Feet &f);
};

class Feet {
    float feet;

public:
    Feet(float f = 0) {
        feet = f;
    }

    float getFeet() const {
        return feet;
    }
};

// Convert Feet to Distance (1 foot = 0.3048 meters)
Distance::Distance(const Feet &f) {
    meters = f.getFeet() * 0.3048f;
}

int main() {
    // 1. Basic to user-defined
    Distance d1 = 15.5f;  // float to Distance
    cout << "Distance d1: ";
    d1.display();

    // 2. User-defined to basic
    float m = d1;         // Distance to float
    cout << "Distance in float: " << m << " meters" << endl;

    // 3. User-defined to user-defined
    Feet f1(10.0f);
    Distance d2 = f1;     // Feet to Distance conversion
    cout << "Distance d2 (converted from Feet): ";
    d2.display();

    return 0;
}
