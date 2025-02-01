/*
 Sweet number is number that contains only even digits (0, 2, 4, 6, 8).
 In given range (m and n read from SI) find the smallest "sweet number". If there is no such number, print NSN.

 Input:
 1000 5000

 Result:
 2000
*/

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int min = m;
    bool rez = true;
    if (n > m) {
        int temp = n;
        n = m;
        m = temp;
    }
    for (int i = n + 1; i <= m; i++) {

        for (int j = i; j > 0; j /= 10) {
            int cifra = j % 10;
            if (cifra % 2 != 0) {
                rez = false;
                break;
            } else {
                rez = true;
            }
        }
        if (rez && i <= min) {
            cout << i << endl;
            break;
        }
    }
    if (!rez)
        cout << "NSN" << endl;

    return 0;
}