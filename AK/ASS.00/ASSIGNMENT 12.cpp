#include<iostream>
using namespace std;
int main() {
    int choice, year, count, i;
    char n = 'y';
    while (n == 'y' || n == 'Y') {
        cout << "\nMenu:\n";
        cout << "1. Check if a year is a leap year\n";
        cout << "2. Display the first 10 leap years after 2000\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter year to be checked: ";
                cin >> year;
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                    cout << "It is a LEAP YEAR\n";
                else
                    cout << "It is not a LEAP YEAR\n";
                break;
            case 2:
                cout << "First 10 leap years after 2000:\n";
                count = 0;
                i = 2000;
                while (count < 10) {
                    i++;
                    if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
                        cout << i << endl;
                        count++;
                    }
                }
                break;
            case 3:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        cout << "Do you want to run the program again? (y/n): ";
        cin >> n;
    }
    cout << "Exiting program.\n";
    return 0;
}
