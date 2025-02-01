/*
 Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата.
 Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот
 во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица.
 Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот.
 Редоследот на запишување на елементите во низата одговара на редоследот на редиците.

 Input:
 3 6
 1 2 2 3 4 5
 1 1 2 2 3 3
 1 2 3 4 5 6

 Result:
 5 1 1
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    float a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    for (int i = 0; i < n; i++) {
        float zbir = 0;
        for (int j = 0; j < m; j++) {
            zbir += a[i][j];
        }
        float prosek = zbir / (float) m;
        float max_element = a[i][0];
        float max_razlika = fabs(a[i][0] - prosek);
        for (int j = 1; j < m; j++) {
            if (fabs(a[i][j] - prosek) > max_razlika) {
                max_element = a[i][j];
                max_razlika = fabs(a[i][j] - prosek);
            }
        }
        cout << max_element << " ";
    }
    return 0;
}
