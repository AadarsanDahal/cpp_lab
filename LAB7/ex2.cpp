#include <iostream>
#include <fstream>
using namespace std;
char ch [500];
        int main () {
        ifstream filel ("example.txt");
        ofstream myfile ("example_copy.txt");
        while (filel) {
        filel.read(ch,500);
        myfile.write(ch, 500);
    }
filel.close();
myfile.close();
return 0;
}