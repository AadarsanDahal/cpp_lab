#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string depositorName;
    long long accountNumber;
    string accountType;

public:
    void assignValues(string name, long long accNum, string accType) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
    }

    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Type: " << accountType << endl;
    }
};

int main() {
    BankAccount account;

    string name, accType;
    long long accNum;

    cout << "Enter depositor name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> accNum;
    cin.ignore();  // To clear newline left in buffer

    cout << "Enter account type (e.g., Savings, Current): ";
    getline(cin, accType);

    account.assignValues(name, accNum, accType);

    cout << "\nAccount Details:" << endl;
    account.display();

    return 0;
}
