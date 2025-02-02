/*
 The dimensions of one matrix (m,n <= 100), and then the elements of the matrix are entered from the keyboard.
 Make a transformation of the matrix so that the middle element in each column is replaced by the difference (by absolute value)
 of the sum of the elements in the first half of the column and the sum of the elements in the second half of the column.
 If the matrix has an even number of rows, the value of the middle two elements should be changed.
 The middle element(s) are included when calculating the sum (in the case of an odd number of rows,
 the middle element is included when calculating both of the sums (upper and lower sum)!).
 Print the transformed matrix on the standard output.

 Input:
 6 5
 0 -5 0 -100 -10
 0 0 0 -30 0
 0 0 0 -20 22
 0 0 45 0 0
 0 4 -23 0 14
 0 -2 11 0 0

 Result:
 0 -5 0 -100 -10
 0 0 0 -30 0
 0 7 33 150 2
 0 7 33 150 2
 0 4 -23 0 14
 0 -2 11 0 0
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int j = 0; j < m; j++) {
        int suma1 = 0, suma2 = 0;
        for (int i = n / 2; i < n; i++) {
            suma2 += a[i][j];
        }
        if (n % 2) {
            for (int i = n / 2; i >= 0; i--) {
                suma1 += a[i][j];
            }
            int razlika = abs(suma1 - suma2);
            a[n / 2][j] = razlika;
        } else {
            for (int i = (n / 2) - 1; i >= 0; i--) {
                suma1 += a[i][j];
            }
            int razlika = abs(suma1 - suma2);
            a[n / 2][j] = razlika;
            a[n / 2 - 1][j] = razlika;
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