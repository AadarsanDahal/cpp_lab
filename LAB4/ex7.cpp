#include <iostream>
using namespace std;

class intamount {
    float principle;
    float rate;
    float time;

public:
    void getdata() {
        cout << "Enter principle: ";
        cin >> principle;
        cout << "Enter rate (% per annum): ";
        cin >> rate;
        cout << "Enter time (in years): ";
        cin >> time;
    }

    float interest() {
        // Simple Interest = (P * R * T) / 100
        return (principle * rate * time) / 100;
    }

    float amount() {
        // Amount = Principle + Interest
        return principle + interest();
    }
};

int main() {
    intamount obj;

    obj.getdata();

    cout << "Interest: " << obj.interest() << endl;
    cout << "Amount: " << obj.amount() << endl;

    return 0;
}
