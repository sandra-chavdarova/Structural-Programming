/*
Да се напише програма во која корисникот внесува два цели броја.
Програмата треба да ja најде нивната средна вредност.
Потоа, програмата треба да го зголеми првиот број за вредноста на таа средна вредност,
а вториот број да го намали за истата вредност. На крајот, да се испечати новата разлика меѓу броевите.

Input:
3 5

Result:
Razlikata e: 6
 */

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int prosek = (a + b) / 2;
    a += prosek;
    b -= prosek;
    int razlika = a - b;
    cout << "Razlikata e: " << razlika << endl;
    return 0;
}
