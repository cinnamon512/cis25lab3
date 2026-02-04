#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    char package;
    cout << "Select a subscription package (A, B, or C): " ;
    cin >> package;

    double hours;
    cout << "Enter the number of hours used: ";
    cin >> hours;

    double bill = 0;
    double extraHours;
    int rate;

    if (hours >= 0 && hours < 744) {
        if (package == 'A' || package == 'a') {
            bill = 9.95;
            extraHours = (hours - 10);
            rate = 2;
            if (hours > 10) {
                bill += extraHours * rate;
            }
        }
        else if (package == 'B' || package == 'b') {
            bill = 14.95;
            extraHours = (hours - 20);
            rate = 1;
            if (hours > 20) {
                bill += extraHours * rate;
            }
        }
        else if (package == 'C' || package == 'c') {
            bill = 19.95;
        }
        else {
            cout << package << " is not a valid subscription package. "
            "Please run the program again and select A, B, or C." << endl;
        }
    }
    else {
        cout << hours << " is not a valid amount of hours in a month. "
                         " Please enter a number between 0 and 744."<< endl;
    }

    if (bill != 0.0) {
        cout << fixed << setprecision(2) << "Your total amount due is: $" << bill << endl;
    }

    return 0;
}