/*
 Од стандарден влез се чита четирицифрен број.
 Да се испечати 1 доколку цифрите во бројот се во строго растечки редослед, во спротивно да се испечати 0.

 Input:
 1234

 Result:
 1
 */

#include <iostream>

using namespace std;

int main() {
    int a;
    bool rastecki = true;
    cin >> a;
    for (int i = a; i > 0; i /= 10) {
        if (i % 10 <= i / 10 % 10) {
            rastecki = false;
            break;
        }
    }
    if (rastecki)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
