#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char pkg;
    int hours;

    cout << "Select a subscription package (A, B, or C): ";
    cin >> pkg;

    cout << "Enter the number of hours used: ";
    cin >> hours;

    if (!(pkg == 'A' || pkg == 'a' || pkg == 'B' || pkg == 'b' || pkg == 'C' || pkg == 'c')) {
        cout << "Invalid package choice. Please run the program again and select A, B, or C." << endl;
        return 0;
    }

    if (hours < 0 || hours > 744) {
        cout << "Invalid number of hours. Please run the program again and enter hours between 0 and 744." << endl;
        return 0;
    }

    double total = 0.0;

    if (pkg == 'A' || pkg == 'a') {
        total = 9.95;
        if (hours > 10) total += (hours - 10) * 2.00;
    } else if (pkg == 'B' || pkg == 'b') {
        total = 14.95;
        if (hours > 20) total += (hours - 20) * 1.00;
    } else {
        total = 19.95;
    }

    cout << fixed << setprecision(2);
    cout << "\nYour total amount due is: $" << total << endl;

    return 0;
}
