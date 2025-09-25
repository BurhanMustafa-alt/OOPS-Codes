#include <iostream>
using namespace std;

int main() {
    int temps[] = {55,62,68,74,59,45,41,58,60,67,65,78,82,88,91,
                   92,90,93,87,80,78,79,72,68,61,59};
    int n = 26;
    int hot = 0, pleasant = 0, cold = 0;

    for(int i = 0; i < n; i++) {
        if(temps[i] >= 85) {
            cout << temps[i] << " = Hot" << endl;
            hot++;
        } else if(temps[i] >= 60) {
            cout << temps[i] << " = Pleasant" << endl;
            pleasant++;
        } else {
            cout << temps[i] << " = Cold" << endl;
            cold++;
        }
    }

    cout << "Hot days: " << hot << endl;
    cout << "Pleasant days: " << pleasant << endl;
    cout << "Cold days: " << cold << endl;
    return 0;
}
