/*
 Да се напише програма во C++ за пресметка на Најголем Заеднички Делител (НЗД)
 и Најмал Заеднички Содржател (НЗС) на два броја.
 НЗД е најголемиот позитивен цел број што ги дели двата броја без остаток.
 НЗС на два броја M и N претставува најмалиот цел позитивен број кој е делив и со M и со N.

 Input:
 25 15

 Result:
 The LCM of 25 and 15 is 75
 The GCD of 25 and 15 is 5
 */

#include <iostream>

using namespace std;

int nzd(int a, int b) {
    if (a % b == 0)
        return b;
    else
        return nzd(b, (a % b));
}

int nzs(int a, int b) {
    return (a * b) / nzd(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;
    int NZD = nzd(a, b);
    int NZS = nzs(a, b);
    cout << "The LCM of " << a << " and " << b << " is " << NZS << endl;
    cout << "The GCD of " << a << " and " << b << " is " << NZD << endl;
    return 0;
}