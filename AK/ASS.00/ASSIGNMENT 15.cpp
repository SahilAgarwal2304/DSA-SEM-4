#include<iostream>
#include<fstream>
using namespace std;

void createFile(string filename, string content) {
    ofstream file(filename);
    if (!file) {
        cerr << "Error creating the file: " << filename << endl;
        return;
    }
    file << content;
    cout << "Content added to file: " << filename << endl;
}

bool compareFiles(string file1, string file2) {
    ifstream f1(file1);
    ifstream f2(file2);
    if (!f1 || !f2) {
        cerr << "Error opening one of the files." << endl;
        return false;
    }
    char ch1, ch2;
    while (f1.get(ch1) && f2.get(ch2)) {
        if (ch1 != ch2) {
            return false;
        }
    }
    return f1.get(ch1) == f2.get(ch2);
}

int main() {
    int choice;
    string file1, file2, content;
    char userChoice = 'y';
    while (userChoice == 'y' || userChoice == 'Y') {
        cout << "\nMenu: \n1. Create files and add content\n2. Compare two files\n3. Exit\nEnter your choice: ";
        cin >> choice;
        cin.ignore();
        switch(choice) {
            case 1:
                cout << "Enter name for first file: ";
                cin >> file1;
                cout << "Enter content for " << file1 << ": ";
                cin.ignore();
                getline(cin, content);
                createFile(file1, content);
                cout << "Enter name for second file: ";
                cin >> file2;
                cout << "Enter content for " << file2 << ": ";
                cin.ignore();
                getline(cin, content);
                createFile(file2, content);
                break;
            case 2:
                cout << "Enter first file name to compare: ";
                cin >> file1;
                cout << "Enter second file name to compare: ";
                cin >> file2;
                if (compareFiles(file1, file2)) {
                    cout << "The files are the same." << endl;
                } else {
                    cout << "The files are different." << endl;
                }
                break;
            case 3:
                cout << "Exiting program...\n";
                userChoice = 'n';
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        if (userChoice != 'n') {
            cout << "\nDo you want to continue? (y/n): ";
            cin >> userChoice;
        }
    }
    return 0;
}
