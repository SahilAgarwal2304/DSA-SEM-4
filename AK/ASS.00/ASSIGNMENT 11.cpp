#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    ifstream inputFile("example.txt");
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    while (getline(inputFile, line)) {
        cout << line << endl;
    }
    inputFile.close();
    return 0;
}
