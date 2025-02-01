/*
 На стандарден влез се внесува број N за димензии на матрица NxN, потоа се внесуваат елементите на матрицата.
 По внесување на матрицата се внесува и вредност за колоната и редицата Y.
 Да се направи трансформација на матрицата така што главната дијагонала се заменува со колоната Y,
 а колоната и редицата Y се заменуваат со главната дијагонала.

 Input 1:
 5
 9 1 2 3 4
 1 9 2 3 4
 1 2 9 3 4
 1 2 3 9 4
 1 2 3 4 9
 0

 Result 1:
 9 9 9 9 9
 9 1 2 3 4
 9 2 1 3 4
 9 2 3 1 4
 9 2 3 4 1


 Input 2:
 5
 9 0 0 0 0
 0 9 0 0 0
 0 0 9 0 0
 0 0 0 9 0
 0 0 0 0 9
 2

 Result 2:
 0 0 9 0 0
 0 0 9 0 0
 9 9 9 9 9
 0 0 9 0 0
 0 0 9 0 0
*/

#include <iostream>

using namespace std;

int main() {
    int n, y;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cin >> y;
    int dijagonala[n], kolona[n];
    for (int i = 0; i < n; i++) {
        dijagonala[i] = a[i][i];
        kolona[i] = a[i][y];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[y][i] = dijagonala[i];
            a[i][y] = dijagonala[i];
        }
        a[i][i] = kolona[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
