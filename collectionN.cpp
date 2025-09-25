#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int num, smallest, largest, sum = 0;
    cout << "Enter number 1: ";
    cin >> num;
    smallest = largest = num;
    sum += num;

    for(int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if(num < smallest) smallest = num;
        if(num > largest) largest = num;
        sum += num;
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;
    cout << "Average = " << (sum * 1.0 / n) << endl;
    return 0;
}
