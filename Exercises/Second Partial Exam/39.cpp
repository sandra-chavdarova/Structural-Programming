/*
 Од стандарден влез се внесуваат димензиите на матрица (<100) а потоа и елементите (цели броеви) на матрицата по редици.
 Да се напише програма која ќе ги изброи сите ромбови во матрицата.
 Ромбовите се составени од четири идентични броеви кои се наоѓаат непосредно под, над, лево и десно од некој елемент на матрицата.

 Input:
 5 5
 3 2 1 5 9
 2 1 2 1 7
 2 2 1 6 1
 2 7 2 1 6
 5 2 3 1 9

 Result:
 4
*/

#include <iostream>

using namespace std;

int main() {
    int n, m, a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int brojac = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            if (a[i + 1][j] == a[i - 1][j] &&
                a[i + 1][j] == a[i][j + 1] &&
                a[i + 1][j] == a[i][j - 1])
                brojac++;
        }
    }
    cout << brojac << endl;
    return 0;
}
