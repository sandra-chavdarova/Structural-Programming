/*
 Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100). На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0. Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.
 Пример:
 1 1 1 0 // единиците од оваа редица
 1 0 1 1
 1 0 0 1
 // единиците од првата колона
 1 ред + 1 колона = 2

 Input:
 3 8
 0 0 1 1 1 0 0 0
 1 1 1 0 1 1 1 0
 0 1 1 1 1 0 0 1

 Result:
 5
*/

#include <iostream>

using namespace std;

int main() {
    int n, m, a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    int brojac = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 2; j++) {
            if (a[i][j] == 1 && a[i][j + 1] == 1 && a[i][j + 2] == 1) {
                brojac++;
                break;
            }
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 2; i++) {
            if (a[i][j] == 1 && a[i + 1][j] == 1 && a[i + 2][j] == 1) {
                brojac++;
                break;
            }
        }
    }
    cout << brojac << endl;
    return 0;
}
