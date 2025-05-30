/*
 Од стандарден влез да се прочита квадратна матриција со број на редици и колони N.
 Прво се вчитува бројот N а потоа и N*N елементите на матрицата.
 Вашате задача е треба да ги замените сите парни елементи во матрицата со збирот на нивните индекси на редови и колони.
 На крај испечатете ја изменетата матрица.

 Input:
 3
 1 2 3
 4 5 6
 7 8 9

 Result:
 1 1 3
 1 5 3
 7 3 9
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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0) {
                a[i][j] = i + j;
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
