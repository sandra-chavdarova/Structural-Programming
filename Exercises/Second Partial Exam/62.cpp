/*
 First read the dimension of one matrix (m, n <= 100) from the standard input, and then the elements of the matrix.
 Generate an array (with at most m x n elements) of the elements of the matrix that will contain the elements
 of each row that appear exactly once in that row. The order of writing the elements in the array corresponds
 to the order of the rows and the order of the elements within the row.
 If the newly generated array has no elements, print N, otherwise, print the elements of the array.
 Example:

 Input:
 3 6
 1 2 2 3 4 5
 1 1 2 2 3 3
 1 2 3 4 5 6

 Result:
 1 3 4 5 1 2 3 4 5 6
*/

#include <iostream>

using namespace std;

int main() {
    int n, m, a[100][100], b[100 * 100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int br = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int brojac = 0;
            for (int k = 0; k < m; k++) {
                if (a[i][j] == a[i][k]) {
                    brojac++;
                }
            }
            if (brojac == 1) {
                b[br] = a[i][j];
                br++;
            }
        }
    }
    if (br > 0)
        for (int i = 0; i < br; i++) {
            cout << b[i] << " ";
        }
    else
        cout << "N" << endl;
    return 0;
}
