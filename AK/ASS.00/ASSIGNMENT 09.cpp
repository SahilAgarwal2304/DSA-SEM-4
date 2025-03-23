#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main() {
    string fileName = "example.txt";
    FILE* file = fopen(fileName.c_str(), "r");

    if (file) {
        fclose(file);
        cout << "File exists. Writing to the file..." << endl;
    } else {
        cout << "File does not exist. Creating the file..." << endl;
    }

    ofstream outFile(fileName);
    if (outFile.is_open()) {
        outFile << "HELLO WORLD" << endl;
        outFile.close();
        cout << "HELLO WORLD written to the file successfully!" << endl;
    } else {
        cout << "Error opening the file!" << endl;
    }

    return 0;
}
