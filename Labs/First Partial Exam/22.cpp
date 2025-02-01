/*
 Да се напише програма со која корисникот на влез треба да внесе три позитивни броја,
 а на излез треба да се отпечати кој од броевите има најмала вредност.
 Доколку сите три броја имаат иста вредност треба да се отпечати порака дека станува збор за три исти броја.

 Input:
 1 2 1

 Result:
 Najmala vrednost ima brojot 1
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, c, najmal;
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "Site tri broja imaat ista vrednost" << endl;
        return 0;
    } else {
        if (a <= b) {
            if (a <= c)
                najmal = a;
        }
        if (b <= a) {
            if (b <= c)
                najmal = b;
        }
        if (c <= a)
            if (c <= b)
                najmal = c;
    }
    cout << "Najmala vrednost ima brojot " << najmal << endl;
    return 0;
}
