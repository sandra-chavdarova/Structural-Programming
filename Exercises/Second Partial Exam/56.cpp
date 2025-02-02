/*
 From SI are read dimension and elements of square matrix (MAX 100x100) of integers.
 Create a new matrix where each element of the main diagonal will be replaced with the sum of all elements
 from the same row right from the element and elements from the same column over the element.
 Also replace each element of the anti-diagonal with the sum of all elements from the same row
 before the element and elements from the same column below the element.
 The blue red elements are part of the main diagonal, the blue elements are part of anti-diagonal,
 and the element in purple is part of both diagonals.
 If there are no such elements, the element is 0. If some element is on both diagonals, both sums are summed.

 Input:
 4
 1 1 1 1
 2 2 2 2
 3 3 3 3
 4 4 4 4

 Result:
 3 1 1 12
 2 5 11 2
 3 7 6 3
 0 4 4 6
*/

#include <iostream>

using namespace std;

int main() {
    int a[100][100], n, b[100][100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            b[i][j] = 0;
        }
    }
    //glavna dijagonala
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i + 1; j < n; j++) {
            sum += a[i][j];
        }
        for (int j = 0; j < i; j++) {
            sum += a[j][i];
        }
        b[i][i] += sum;
    }
    //sporedna dijagonala
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = n - 2 - i; j >= 0; j--) {
            sum += a[i][j];
        }
        for (int j = i + 1; j < n; j++) {
            sum += a[j][n - 1 - i];
        }
        b[i][n - 1 - i] += sum;

    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && i + j != n - 1)
                b[i][j] += a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
