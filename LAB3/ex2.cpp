//Programs to illustrate the concepts of:
//Constructor (default, parameterized, copy)


#include <iostream>
using namespace std;

class student
{
private:
    /* data */
    int roll;
    string name;
public:

student(){  // Default constructor
    roll=0;
    name="";
}

student(int r, string n){  //setting values using parameterized constructor

    roll =r;
    name = n;
}

student(student &s){  // Copy constructor
        roll = s.roll;
        name = s.name;
}


void display (){
    cout<<"The roll is "<< roll <<endl;
    cout<<"The name is "<< name <<endl;

    cout << "----------------------" << endl;

}

   
};


int main() {

        //using Defalut constructor 

    student s0;
    s0.display();

    
    student s1(2,"Aadarsan");  // Defining object s1
    s1.display();  //Displlaying Object


    //using Copy constructor 

    student s2 (s1);  //cpoying s1 
    s2.display();




     
    return 0;
}