//Example of get() and put():create copy of existing file

#include <iostream>
#include <fstream>
    using namespace std;
char ch;
    int main () {
        ifstream filel ("example.txt");
        ofstream myfile("example'scopy.txt");
        while (filel) {
            filel.get(ch);
            myfile.put(ch);
        }
filel.close();
myfile.close();
return 0;
}