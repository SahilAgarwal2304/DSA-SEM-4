#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("animals.txt");
    if (outFile.is_open()) {
        outFile << "cat\n";
        outFile << "dog\n";
        outFile << "bear\n";
        outFile << "hello\n";
        outFile << "elephant\n";
        outFile << "hello\n";
        outFile << "tiger\n";
        outFile << "hello\n";
        outFile << "horse\n";
        outFile.close();
    } else {
        cerr << "Error: Unable to open file for writing.\n";
        return 1;
    }

    cout << "Initial contents of the file 'animals.txt':\n";
    ifstream inFile("animals.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cerr << "Error: Unable to open file for reading.\n";
        return 1;
    }

    inFile.open("animals.txt");
    ofstream tempFile("temp.txt");
    if (inFile.is_open() && tempFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            if (line != "hello") {
                tempFile << line << "\n";
            }
        }
        inFile.close();
        tempFile.close();
    } else {
        cerr << "Error: Unable to open files for processing.\n";
        return 1;
    }

    if (remove("animals.txt") != 0) {
        cerr << "Error: Unable to delete the original file.\n";
        return 1;
    }
    if (rename("temp.txt", "animals.txt") != 0) {
        cerr << "Error: Unable to rename the temporary file.\n";
        return 1;
    }

    cout << "\nUpdated contents of the file 'animals.txt':\n";
    inFile.open("animals.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cerr << "Error: Unable to open the updated file for reading.\n";
        return 1;
    }

    return 0;
}
