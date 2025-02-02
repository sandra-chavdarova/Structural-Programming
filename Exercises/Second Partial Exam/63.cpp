/*
 Read the dimensions M and N (not bigger than 100) and the values (whole numbers) of one matrix MxN from the standard input.
 Print out the index of the first column that has the smallest sum of all of its elements.

 Input:
 3 8
 1 2 3 5 7 11 13 17
 19 23 29 31 37 41 43 47
 53 59 61 67 71 73 79 83

 Result:
 0
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
    int min = 0, indeks = 0;
    for (int i = 0; i < n; i++) {
        min += a[i][0];
    }
    for (int j = 0; j < m; j++) {
        int zbir = 0;
        for (int i = 0; i < n; i++) {
            zbir += a[i][j];
        }
        if (zbir < min) {
            min = zbir;
            indeks = j;
        }
    }
    cout << indeks << endl;
    return 0;
}
