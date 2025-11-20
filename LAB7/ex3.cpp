#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Friend functions for operator overloading
    friend istream& operator>>(istream &in, Student &s);
    friend ostream& operator<<(ostream &out, const Student &s);
};

// Overload extraction operator >>
istream& operator>>(istream &in, Student &s) {
    cout << "Enter name: ";
    in >> s.name;
    cout << "Enter age: ";
    in >> s.age;
    return in;
}

// Overload insertion operator <<
ostream& operator<<(ostream &out, const Student &s) {
    out << "Student Name: " << s.name << endl;
    out << "Student Age: " << s.age << endl;
    return out;
}

int main() {
    Student s;

    // Using overloaded >> operator
    cin >> s;

    // Using overloaded << operator
    cout << s;

    return 0;
}
