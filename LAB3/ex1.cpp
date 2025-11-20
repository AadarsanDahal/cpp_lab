//Programs to illustrate the concepts of:
//Class and objects


#include <iostream>
using namespace std;

class student
{
private:
    /* data */
    int roll;
    string name;
public:

student(int r, string n){  //setting values using constructor

    roll =r;
    name = n;
}

void display (){
    cout<<"The roll is "<< roll <<endl;
    cout<<"The name is "<< name <<endl;

}

   
};


int main() {

    student s1(2,"Aadarsan");  // Defining object s1
    s1.display();  //Displlaying Object
     
    return 0;
}