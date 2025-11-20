//Accept the number from the user and find whether it is an Armstrong number or not. (the number of digits in input number must be computed using program logic)

#include <iostream>
using namespace std;

int orginalnum , sum =0 , rem=0 , result =0 , num;
int main() {

    cout << "Enter a number: ";
  
    cin >> orginalnum;

    orginalnum = num;


    // checking armstrong

   while (orginalnum != 0) {
    rem = orginalnum % 10;
    result += rem * rem * rem;
    orginalnum /= 10;

   }

   if (result == num) {
         cout << "The number is an Armstrong number." << endl;
    }
    else {
        cout << "The number is not an Armstrong number." << endl;
    }
     
    return 0;
}