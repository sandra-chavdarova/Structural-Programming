/*
 Од стандарден влез да се прочита квадратна матрица со број на редици и колони N.
 Прво се вчитува бројот N а потоа и N*N елементите на матрицата.
 Ваша задача е да ја пронајдете колоната со максимална сума на елементите и таа сума да ја додадете на секој елемент на таа колона.
 На крај испечатете ја трансформираната матрица.
 *Доколку има 2 колони со иста максимална сума, да се чува таа што е прва најдена.

 Input:
 3
 1 2 3
 4 5 6
 7 8 9

 Result:
 1 2 21
 4 5 24
 7 8 27
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int max = 0, indeks = 0;
    for (int i = 0; i < n; i++) {
        int zbir = 0;
        for (int j = 0; j < n; j++) {
            if (i == 0)
                max += a[j][i];
            zbir += a[j][i];
        }
        if (zbir > max) {
            max = zbir;
            indeks = i;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == indeks)
                a[j][i] += max;
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
