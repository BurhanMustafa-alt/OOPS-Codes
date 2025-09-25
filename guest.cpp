#include <iostream>
using namespace std;

int main() {
    int guests, chairs;
    cout << "Enter guests and chairs: ";
    cin >> guests >> chairs;

    int ways = 1;
    for (int i = 0; i < chairs; i++) {
        ways *= (guests - i);
    }

    cout << "Possible arrangements = " << ways << endl;
    return 0;
}
