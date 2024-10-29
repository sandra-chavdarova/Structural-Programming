/*
 Да се напише програма во која се внесуваат три цели броеви.
 Да се отпечати 1 доколку сите 3 броеви се исти или доколку сите 3 броеви се различни.
 Во спротивно да се отпечати 0.

 Input:
 1 2 3

 Result:
 1
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a == b && b == c) || (a != b && a != c && b != c))
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
