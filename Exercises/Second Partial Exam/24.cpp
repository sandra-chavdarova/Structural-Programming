/*
 Еден елемент се заматува ако се најде аритметичка средина на елементот и сите негови соседи.
 Сосед на еден елемент се сите елементи кои припаѓаат на матрицата и се  околу истиот елемент (хоризонтално, вертикално и дијагонално).
 Од стандарден влез се чита матрица од реални броеви (3 < n,m < 50).
 Прво се читаат бројот на редици и колони на матрицата и во секој преостанат ред се внесува еден ред од матрицата (види пример).
 По читањето на матрицата, се внесуваат и 2 пара координати на матрицата (ред и колона)
 кои го репрезентираат горниот-лев и долниот-десен елемент од регионот.
 Потребно е да генеирате нова матрица во која ќе ги заматите сите елементи кои припаѓаат на регионот.
 Новодобиената матрица, во истиот формат, треба да се испечати (види пример).
 Пример:
 3 4
 1.00 2.00 3.00 4.00
 5.00 6.00 7.00 8.00
 9.00 0.00 1.00 2.00
 0 1
 2 2
 Резултат:
 3 4
 1.00 4.00 5.00 4.00
 5.00 3.78 3.67 8.00
 9.00 4.67 4.00 2.00

 Input:
 3 3
 1 2 3
 4 5 6
 7 8 9
 0 0
 2 2

 Result:
 3 3.5 4
 4.5 5 5.5
 6 6.5 7
*/

#include <iostream>

using namespace std;

int main() {
    float a[50][50], b[50][50];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int brojac;
    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            brojac = 0;
            if (i == 0 && j == 0) {
                b[i][j] += a[i + 1][j] +
                           a[i + 1][j + 1] +
                           a[i][j + 1];
                brojac = 4;
            } else if (i == 0 && j == (m - 1)) {
                b[i][j] += a[i + 1][j] +
                           a[i + 1][j - 1] +
                           a[i][j - 1];
                brojac = 4;
            } else if (i == (n - 1) && j == 0) {
                b[i][j] += a[i - 1][j] +
                           a[i - 1][j + 1] +
                           a[i][j + 1];
                brojac = 4;
            } else if (i == (n - 1) && j == (m - 1)) {
                b[i][j] += a[i - 1][j] +
                           a[i - 1][j - 1] +
                           a[i][j - 1];
                brojac = 4;
            } else if (i == 0) {
                b[i][j] += a[i][j - 1] +
                           a[i][j + 1] +
                           a[i + 1][j - 1] +
                           a[i + 1][j] +
                           a[i + 1][j + 1];
                brojac = 6;
            } else if (i == (n - 1)) {
                b[i][j] += a[i][j - 1] +
                           a[i][j + 1] +
                           a[i - 1][j - 1] +
                           a[i - 1][j] +
                           a[i - 1][j + 1];
                brojac = 6;
            } else if (j == 0) {
                b[i][j] += a[i - 1][j] +
                           a[i + 1][j] +
                           a[i - 1][j + 1] +
                           a[i + 1][j + 1] +
                           a[i][j + 1];
                brojac = 6;
            } else if (j == (m - 1)) {
                b[i][j] += a[i - 1][j] +
                           a[i + 1][j] +
                           a[i - 1][j - 1] +
                           a[i + 1][j - 1] +
                           a[i][j - 1];
                brojac = 6;
            } else {
                b[i][j] +=
                        a[i - 1][j - 1] +
                        a[i - 1][j] +
                        a[i - 1][j + 1] +
                        a[i][j - 1] +
                        a[i][j + 1] +
                        a[i + 1][j - 1] +
                        a[i + 1][j] +
                        a[i + 1][j + 1];
                brojac = 9;
            }

            b[i][j] /= (float) brojac;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}