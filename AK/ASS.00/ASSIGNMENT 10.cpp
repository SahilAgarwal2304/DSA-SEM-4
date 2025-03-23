#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename = "new_file.txt";
    ifstream file(filename);
    if (file) {
        cout << "File already exists!" << endl;
    } else {
        ofstream newFile(filename);
        cout << "File created successfully!" << endl;
    }
    return 0;
}
