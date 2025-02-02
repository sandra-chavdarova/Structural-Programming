/*
 Z-diagonal of given square matrix is composed of the elements of the first row, the elements of the supportive diagonal,
 and the elements of the last row (marked with blue color on the example).
 From SI read the dimensions of square matrix (integer N, N > 2, N<100), and the elements of the matrix (real numbers).
 Store the elements of the Z-diagonal in an array, starting from the first row, continuing with the supportive diagonal,
 and finishing with the last row (the last element of the first row is the same element with the first element of the supportive diagonal,
 and the last element of the supportive diagonal is the same as the first element of the last row,
 and these elements should be stored only once). The resulted array should be printed on the SO.
 Then print the original matrix, but with the elements of Z-diagonal in reverse order.

 Input:
 4
 5 5.5 6 1.2
 8  95.1 21.3 13
 34 4.1 37.4  22
 4.1 5.5 0.7 7

 Result:
 5.00 5.50 6.00 1.20 21.30 4.10 4.10 5.50 0.70 7.00
 7.00 0.70 5.50 4.10
 8.00 95.10 4.10 13.00
 34.00 21.30 37.40 22.00
 1.20 6.00 5.50 5.00
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    float a[100][100], b[100 * 100], prva[100], dijagonala[100], posledna[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int br = 0, p = 0;
    for (int i = 0; i < n; i++) {
        b[br] = a[0][i];
        prva[p] = b[br];
        p++;
        br++;
    }
    int d = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = n - 2; j > 0; j--) {
            if (i + j == n - 1) {
                b[br] = a[i][j];
                dijagonala[d] = b[br];
                d++;
                br++;
            }
        }
    }
    int k = 0;
    for (int i = 0; i < n; i++) {
        b[br] = a[n - 1][i];
        posledna[k] = b[br];
        k++;
        br++;
    }
    for (int i = 0; i < br; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    for (int i = 0, j = k - 1; i < n && j >= 0; i++, j--) {
        a[0][i] = posledna[j];
    }
    for (int j = 0, q = p - 1; j < n && q >= 0; j++, q--) {
        a[n - 1][j] = prva[q];
    }
    for (int i = 1, q = d - 1; i < n - 1 && q >= 0; i++, q--) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1)
                a[i][j] = dijagonala[q];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
