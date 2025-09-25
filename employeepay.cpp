#include <iostream>
using namespace std;

int main() {
    int id, hours;
    double rate, gross, net, total = 0;
    int count = 0;

    cout << "Enter employee data (id rate hours), -1 to stop:\n";
    while (true) {
        cin >> id;
        if (id == -1) break;
        cin >> rate >> hours;

        if (hours > 40)
            gross = (40 * rate) + ((hours - 40) * rate * 1.5);
        else
            gross = hours * rate;

        net = gross - (gross * 0.03625);
        cout << "Employee " << id << " Net Pay = " << net << endl;

        total += net;
        count++;
    }
    cout << "Total payroll = " << total << endl;
    cout << "Average pay = " << (total / count) << endl;
    return 0;
}
