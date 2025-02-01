/*
 Напишете програма за читање елементи во матрица и проверете дали дадената матрица е симетрична матрица или не.
 Од стандаред влез се внесуваат димензиите на матрицата M и N соодветно и потоа се внесуваат елементите на матрицата.
 Ваша задача е доколку матрицата е симетрична да испечатете на екран 1, доколку не е симетрична да испечатете -1,
 потоа се печати самата матрица на екран.

 Input:
 3 3
 1 2 3
 2 4 5
 3 5 8

 Result:
 1
 1 2 3
 2 4 5
 3 5 8
*/

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    bool simetricna = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != a[j][i]) {
                simetricna = false;
                break;
            }
        }
    }
    if (simetricna)
        cout << 1 << endl;
    else
        cout << -1 << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
