//• Write a program to read and display 10 objects of item class
// containing data member item, name ,code and price.

#include <iostream>
#include <string>
using namespace std;

class Item {
    string itemName;
    int code;
    float price;

public:
    void readData() {
        cout << "Enter item name: ";
        getline(cin, itemName);
        cout << "Enter item code: ";
        cin >> code;
        cout << "Enter price: ";
        cin >> price;
        cin.ignore();  // Clear newline character from input buffer
    }

    void displayData() {
        cout << "Item Name: " << itemName << ", Code: " << code << ", Price: " << price << endl;
    }
};

int main() {
    Item items[10];

    cout << "Enter details of 10 items:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nItem " << (i + 1) << ":\n";
        items[i].readData();
    }

    cout << "\nDisplaying item details:\n";
    for (int i = 0; i < 10; i++) {
        items[i].displayData();
    }

    return 0;
}
