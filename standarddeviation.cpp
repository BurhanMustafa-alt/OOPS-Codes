#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int num, smallest, largest, sum = 0;
    double sumSquares = 0;

    cout << "Enter number 1: ";
    cin >> num;
    smallest = largest = num;
    sum += num;
    sumSquares += num * num;

    for(int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if(num < smallest) smallest = num;
        if(num > largest) largest = num;
        sum += num;
        sumSquares += num * num;
    }

    double avg = sum * 1.0 / n;
    double variance = (sumSquares / n) - (avg * avg);
    double stdev = sqrt(variance);

    cout << "Range = " << largest - smallest << endl;
    cout << "Standard Deviation = " << stdev << endl;
    return 0;
}
