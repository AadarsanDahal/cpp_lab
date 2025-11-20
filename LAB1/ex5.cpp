//Simple calculator using the Switch-Case statement

#include <iostream>
using namespace std;

int main() {


    int num1, num2, result;
    int o;
    



bool condition = true;
while
(condition) {


    cout << "Enter 1 to add,\n 2 to subtract,\n 3 to multiply, \n or 4 to divide:  \n 5 to exit: ";
    cin >> o;

    switch (o)
    {

    case 1:
    cout << "Enter two numbers to add: ";
        cin >> num1 >> num2;
        result = num1 + num2;
        cout << "The result is: " << result << endl;
        break;
        /* code */

    case 2:
        cout << "Enter two numbers to subtract: ";
        cin >> num1 >> num2;
        result = num1 - num2;
        cout << "The result is: " << result << endl;
        break;

    
        
    case 3: 
    cout << "Enter two numbers to multiply: ";
        cin >> num1 >> num2;
        result = num1 * num2;
        cout << "The result is: " << result << endl;
        break;

    case 4:
        cout << "Enter two numbers to divide: ";
        cin >> num1 >> num2;
        if (num2 != 0) {
            result = num1 / num2;
            cout << "The result is: " << result << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    
    default:
       
        cout << "Invalid operation selected." << endl;
        condition = false;
        break;

        case 5:
        cout << "Exiting the calculator." << endl;
        condition = false;
        break;
    }
     
   
}

 return 0;
}