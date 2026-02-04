#include <iostream>
using namespace std;
#include <fstream>

int main() {
    int days;
    cout << "How many days of temperatures would you like to record? ";
    cin >> days;

    double high;

    ofstream outputFile;
    outputFile.open("temperatures.txt");

    for (int i = 1; i <= days; i++) {
        cout << "Enter temperature for Day " << i << ": ";
        cin >> high;
        outputFile << high << "\n";
    }

    outputFile.close();

    return 0;
}