/*
 Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
 Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
 да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.

 Input:
 99 500

 Result:
 200
*/

#include <iostream>

using namespace std;

int main() {
    int m, n, broj;
    bool blag = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        int j = i;
        for (j; j > 0; j /= 10) {
            int cifra = j % 10;
            if (cifra % 2 == 0) {
                broj = i;
                blag = 1;
            } else {
                blag = 0;
                break;
            }

        }
        if (blag == 1)
            break;
    }

    if (blag == 1)
        cout << broj << endl;
    else
        cout << "NE" << endl;

    return 0;
}
