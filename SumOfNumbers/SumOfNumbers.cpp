#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int num = 0;

    while (num >= 0) {
        cout << "Enter a positive number to add to the sum, or a negative number to quit: ";
        cin >> num;
        if (num >= 0) {
            sum += num;
        }
    }

    // while (n >= 0) {
    //     sum += n;
    //     cout << "Enter a positive number to add to the sum, or a negative number to quit: ";
    //     cin >> n;
    // }

    cout << "The final sum is: " << sum << endl;

    return 0;
}