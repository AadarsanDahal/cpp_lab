//program to 
//Passing and returning objects from functions




#include <iostream>
using namespace std;


class student
{
private:
    /* data */
 
public:

int rollno;
string name;


    void set_data( int r , string n){
        rollno =r;
        name = n;
    }
};


student show(int r, string n){
    cout << "the name and roll num are as follows "<<endl;
    cout<< r<<"    "<<n<<endl;

    return student();
}



int main() {


    student s1;
    s1.set_data(3,"Jon doe");
    student s2 =show(s1.rollno,s1.name);


    //value passed from function 
  
    



     
    return 0;
}