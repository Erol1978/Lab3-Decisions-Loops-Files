#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream inFile("temperatures.txt");
    if (!inFile) {
        cout << "Error: Could not open temperatures.txt" << endl;
        return 0;
    }

    double temp;
    double sum = 0.0;
    int count = 0;

    while (inFile >> temp) {
        sum += temp;
        count++;
    }

    inFile.close();

    if (count == 0) {
        cout << "No temperatures found in the file." << endl;
        return 0;
    }

    double avg = sum / count;

    cout << fixed << setprecision(1);
    cout << "Temperatures analyzed for " << count << " days." << endl;
    cout << "The average temperature was: " << avg << endl;

    return 0;
}
