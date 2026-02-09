#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter a positive number to add to the sum, or a negative number to quit: ";
    cin >> num;

    while (num >= 0) {
        sum += num;
        cout << "Enter a positive number to add to the sum, or a negative number to quit: ";
        cin >> num;
    }

    cout << "\nThe final sum is: " << sum << endl;
    return 0;
}
