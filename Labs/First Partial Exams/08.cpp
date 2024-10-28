/*
 Да се напише програма која вчитува од стандарден влез должина на катетите (цели броеви) на еден триаголник.
 Ваша задача е да ги пресметате и испечатите квадратот на хипотенузата и плоштината на триаголникот.
 Input:
 2 2
 Result:
 8
 2
 */

#include <iostream>

using namespace std;

int main() {
    float a, b, c, plostina;
    cin >> a >> b;
    c = a * a + b * b;
    plostina = a * b / 2;
    cout << c << endl << plostina << endl;
    return 0;
}
