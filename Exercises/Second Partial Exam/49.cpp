/*
 Write a program where a matrix A read from SI (maximum value of dimensions of the matrix is 100) is transformed to a new matrix B.
 Each element of the new matrix B is sum of positive neighbors of the corresponding element of the matrix A.
 Print the new matrix B on the standard output.

 Input:
 2 3
 1 -5 -9
 -2 3 8

 Result:
 0 4 8
 4 8 3
*/

#include <iostream>

using namespace std;

int main() {
    int n, m, a[100][100], b[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum = 0;
            if (i + 1 < n && a[i + 1][j] > 0)
                sum += a[i + 1][j];
            if (i - 1 >= 0 && a[i - 1][j] > 0)
                sum += a[i - 1][j];
            if (j + 1 < m && a[i][j + 1] > 0)
                sum += a[i][j + 1];
            if (j - 1 >= 0 && a[i][j - 1] > 0)
                sum += a[i][j - 1];
            b[i][j] = sum;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
