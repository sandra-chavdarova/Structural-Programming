/*
 Од стандарден влез се вчитуваат 2 броја M и N, кои ја означуваат димензијата на матрицата,
 MxN и потоа се внесуваат елементите во матрицата. Вашате задача е последниот елемент во секој од редовите на матрицата,
 да го замените со максималниот елемент од таа редица.
 На крај испечатете ја изменетата матрица и во нов ред среданта свредност на изменетата матицата.

 Input:
 3 4
 1 5 6 7
 5 4 7 3
 5 5 7 7

 Result:
 1 5 6 7
 5 4 7 7
 5 5 7 7
 5.5
*/

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    float a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    float max;
    for (int i = 0; i < n; i++) {
        max = a[i][0];
        for (int j = 0; j < m; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        a[i][m - 1] = max;
    }
    float zbir = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
            zbir += a[i][j];
        }
        cout << endl;
    }
    float prosek = zbir / (float) (n * m);
    cout << prosek << endl;
    return 0;
}
