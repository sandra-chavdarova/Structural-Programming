/*
 Да се напише програма која чита две целобројни матрици со димензија mxn,
 а потоа печати колку колони од првата матрица се наоѓаат во втората матрица.

 Input:
 4 4

 1 2 4 6
 2 3 4 5
 5 1 3 1
 1 3 4 4

 2 2 2 4
 3 2 3 5
 5 2 1 3
 1 1 3 4

 Result:
 1
*/

#include <iostream>

using namespace std;

int main() {
    int n, m, brojac = 0;
    cin >> n >> m;
    int a[n][m], b[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }

    for (int j = 0; j < m; j++) {
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (a[i][j] != b[i][j]) {
                break;
            } else
                flag = true;
        }
        if (flag)
            brojac++;
    }
    cout << brojac << endl;
    return 0;
}
