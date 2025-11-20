//Programs to illustrate the concepts of:
//Destructor


#include <iostream>
using namespace std;


class test
{
private:
    /* data */

    int a;
    int b;
public:

test(){

  a=0;
  b=0;
    cout<<"Constructor called"<<endl;
    cout<<a<<b<<endl;
    cout<<"value shown"<<endl;
    cout<<"......................"<<endl;

}
   

    ~test(){
    cout<<"Deconstructor called"<<endl;
}


};



int main() {

        {  //inside a segment a is called 

            test a;

        }  // so that it can de allocate itself at this point 
   
    
     
    return 0;
}