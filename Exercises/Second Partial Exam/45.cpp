/*
 Read from standard input the dimensions of a matrix (m < 100 and n < 100) which contains only zeros and ones.
 Then read the elements of the matrix.
 Read the coordinates of one element of the matrix. If the element of the read position is 0, then it should become 1 and:
    •	all zeros above that element to the first element with value 1 or to the start of the column,
    •	all zeros bellow that element to the first element with value 1 or to the end of the column,
    •	all zeros left from that element to the first element with value 1 or to the begin of the row
    •	all zeros right from that element to the first element with value 1 or to the end of the row.
 If the element of the given position is 1 than the matrix stays unchanged.
 Print the changed matrix.

 Input:
 7 6
 1 1 1 1 1 1
 0 0 0 0 1 0
 1 0 0 0 1 1
 1 1 0 1 0 0
 0 1 1 0 0 0
 0 1 0 0 0 0
 1 1 0 0 0 0
 5 5

 Result:
 1 1 1 1 1 1
 0 0 0 0 1 0
 1 0 0 0 1 1
 1 1 0 1 0 1
 0 1 1 0 0 1
 0 1 1 1 1 1
 1 1 0 0 0 1
*/

#include <iostream>

using namespace std;

int main() {
    int a[100][100], n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cin >> y >> x;
    if (a[y][x] == 0) {
        a[y][x] = 1;
        for (int i = x + 1; i < m; i++) {
            if (a[y][i] == 1)
                break;
            else
                a[y][i] = 1;
        }
        for (int i = x - 1; i >= 0; i--) {
            if (a[y][i] == 1)
                break;
            else
                a[y][i] = 1;
        }
        for (int i = y + 1; i < n; i++) {
            if (a[i][x] == 1)
                break;
            else
                a[i][x] = 1;
        }
        for (int i = y - 1; i >= 0; i--) {
            if (a[i][x] == 1)
                break;
            else
                a[i][x] = 1;
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
