/*
 Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви),
 како и елементите на матрицата со димензии M x N (цели броеви).
 Да се напише програма што ќе ги промени редиците на матрицата на следниот начин:
    •	Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1.
    •	Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1.
    •	Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0.
 Променетата матрица да се испечати на екран.

 Input:
 17
 4 6
 1 5 7 2 1 1
 10 0 0 5 1 1
 5 8 3 9 1 0
 9 8 2 5 3 4

 Result:
 0 0 0 0 0 0
 0 0 0 0 0 0
 1 1 1 1 1 1
 1 1 1 1 1 1
*/

#include <iostream>

using namespace std;

int main() {
    int n, m, x;
    cin >> x >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int zbir = 0;
        for (int j = 0; j < m; j++) {
            zbir += a[i][j];
        }
        if (zbir > x) {
            for (int j = 0; j < m; j++) {
                a[i][j] = 1;
            }
        } else if (zbir < x) {
            for (int j = 0; j < m; j++) {
                a[i][j] = -1;
            }
        } else if (zbir == x) {
            for (int j = 0; j < m; j++) {
                a[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}