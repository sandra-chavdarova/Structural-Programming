/*
 Да се напише програма во која се внесуваат три цели броеви.
 Доколку внесените броеви се во растечки редослед да се испечати 1,
 a доколку се во опаѓачки редослед да се испечати -1, во спротивно да се испечати 0.

 Input:
 10 15 20

 Result:
 1
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (c > b && b > a)
        cout << 1 << endl;
    else if (a > b && b > c)
        cout << -1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
