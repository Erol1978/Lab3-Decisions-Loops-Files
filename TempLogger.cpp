#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int days;
    double temp;

    cout << "How many days of temperatures would you like to record? ";
    cin >> days;

    ofstream outFile("temperatures.txt");

    for (int i = 1; i <= days; i++) {
        cout << "Enter temperature for Day " << i << ": ";
        cin >> temp;
        outFile << temp << endl;
    }

    outFile.close();
    return 0;
}
