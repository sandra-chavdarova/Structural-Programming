/*
 Write a program that will read unknown number of three integers, and for each triple (a, b, c) will print the number (a or b)
 that contains the digit c more times on even positions (the positions are counted from right to left, and the first position is 1).

 Input:
 5436666 542456 6
 1232432 3435 2
 121211 22222 1
 3333 4444 3
 555514 1212 1
 889999 99 9
 50 20 2
 81 21 8

 Result:
 5436666
 1232432
 121211
 3333
 1212
 889999
 20
 81
*/

#include <iostream>

using namespace std;

int main() {
    int long x, y, c;
    while (cin >> x >> y >> c) {
        int brojacX = 0, brojacY = 0;
        for (int i = x, index = 1; i > 0; i /= 10, index++) {
            if (i % 10 == c && index % 2 == 0)
                brojacX++;
        }
        for (int i = y, index = 1; i > 0; i /= 10, index++) {
            if (i % 10 == c && index % 2 == 0)
                brojacY++;
        }
        if (brojacX > brojacY)
            cout << x << endl;
        if (brojacY > brojacX)
            cout << y << endl;
    }
    return 0;
}
