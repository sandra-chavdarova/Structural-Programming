/*
 Од стандарден влез да се прочита квадратна матриција со број на редици и колони N.
 Прво се вчитува бројот N а потоа и N*N елементите на матрицата.
 Ваша задача е да го пронајдете минималниот елемент во секој непарен ред и да ја додадете оваа минимална вредност
 на секој елемент во следниот (парен) ред.

 Input:
 4
 2 5 1 6
 7 12 3 4
 9 6 5 4
 1 1 2 3

 Result:
 2 5 1 6
 8 13 4 5
 9 6 5 4
 5 5 6 7
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i += 2) {
        int min = 0;
        if (i % 2)
            min = a[i][1];
        for (int j = 1; j <= n; j++) {
            if (a[i][j] < min)
                min = a[i][j];
        }
        if (i + 1 <= n)
            for (int j = 1; j <= n; j++) {
                a[i + 1][j] += min;
            }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
