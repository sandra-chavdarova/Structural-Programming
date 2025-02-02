/*
 Read a square matrix of integers from standard input.
 First the dimension N is entered (2 < N <= 100) and then the elements of the matrix by rows.
 Transform the matrix in a way that all the elements ABOVE the main diagonal will be set to the value of the maximal element
 found above the main diagonal, while all the elements BELOW the main diagonal will be set to the value of the minimal element
 found below the main diagonal. Print out the transformed matrix.

 Input:
 10
 8000 15154 3101 -4285 14223 -4317 9712 -998 4191 15350
 14832 -12300 -6273 14285 -10493 2613 14993 5715 7288 -8709
 -753 5806 -16334 4015 -4213 3503 -16375 -3878 -965 -8116
 -15763 -12742 15540 593 -5556 1046 3318 -12974 8758 11470
 -12375 -15388 8896 7606 -14426 5389 14374 9764 10937 -3080
 2868 -15160 -11867 6125 -3738 -14532 10601 -1919 2126 2012
 -13886 6666 8246 15832 -11023 -426 14855 5000 1214 3485
 7273 -2305 2237 2995 -15316 -10014 6608 -4734 13287 -12933
 -6419 8888 -6434 -15351 16162 10173 -5335 -14246 7382 -3096
 -6381 668 -2479 6130 3521 -5775 -2177 8363 -14572 -9663

 Result:
 8000 15350 15350 15350 15350 15350 15350 15350 15350 15350
 -15763 -12300 15350 15350 15350 15350 15350 15350 15350 15350
 -15763 -15763 -16334 15350 15350 15350 15350 15350 15350 15350
 -15763 -15763 -15763 593 15350 15350 15350 15350 15350 15350
 -15763 -15763 -15763 -15763 -14426 15350 15350 15350 15350 15350
 -15763 -15763 -15763 -15763 -15763 -14532 15350 15350 15350 15350
 -15763 -15763 -15763 -15763 -15763 -15763 14855 15350 15350 15350
 -15763 -15763 -15763 -15763 -15763 -15763 -15763 -4734 15350 15350
 -15763 -15763 -15763 -15763 -15763 -15763 -15763 -15763 7382 15350
 -15763 -15763 -15763 -15763 -15763 -15763 -15763 -15763 -15763 -9663
*/

#include <iostream>

using namespace std;

int main() {
    int n, a[100][100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int max_above = a[0][1], min_below = a[1][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                if (a[i][j] > max_above)
                    max_above = a[i][j];
            }
            if (j < i) {
                if (a[i][j] < min_below)
                    min_below = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                a[i][j] = max_above;
            }
            if (j < i) {
                a[i][j] = min_below;
            }
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
