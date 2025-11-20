#include <iostream>
using namespace std;

// Class template with multiple types
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    // Constructor
    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    // Display function
    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    // Create object with int and float
    Pair<int, float> p1(10, 15.5);
    p1.display();

    // Create object with string and int
    Pair<string, int> p2("Books", 5);
    p2.display();

    // Create object with char and double
    Pair<char, double> p3('A', 99.99);
    p3.display();

    return 0;
}
