/*
 Да се напише програма која чита радиус на кружница од стандарден влез.
 На излез да се испечати периметарот и плоштината на кружницата.

 Input:
 4

 Result:
 Perimetar: 25.12
 Plostina: 50.24
 */

#include <iostream>

using namespace std;

int main() {
    float r, L, P;
    cin >> r;
    L = 2 * r * 3.14;
    P = r * r * 3.14;
    cout << "Perimetar: " << L << endl << "Plostina: " << P << endl;
    return 0;
}
