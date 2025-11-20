#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("test.txt"); // Open a file for reading
    ofstream outFile("output.txt"); // Open a file for writing

    char ch;

    // Test reading from a file
    inFile.get(ch); // Try to read one character

    cout << "inFile.fail(): " << inFile.fail() << endl;  // 1 if fail
    cout << "inFile.bad(): "  << inFile.bad()  << endl;  // 1 if bad
    cout << "inFile.eof(): "  << inFile.eof()  << endl;  // 1 if end of file
    cout << "inFile.good(): " << inFile.good() << endl;  // 1 if everything is okay

    // Test writing to a file
    outFile.put('A'); // Try to write one character

    cout << "outFile.fail(): " << outFile.fail() << endl;
    cout << "outFile.bad(): "  << outFile.bad()  << endl;
    cout << "outFile.eof(): "  << outFile.eof()  << endl; // eof() is generally 0 for output
    cout << "outFile.good(): " << outFile.good() << endl;

    inFile.close();
    outFile.close();

    return 0;
}
