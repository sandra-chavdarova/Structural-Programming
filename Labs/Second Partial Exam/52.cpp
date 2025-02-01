/*
 Од стандарден влез се вчитува квадратна матрица со n редици и колони.
 Прво се вчитува бројот n, па потоа и n x n елементите на матрицата.
 Вашата задача е да напишете програма во C++ која ќе определува дали дадената матрица е "магичен квадрат".
 Магичен квадрат е квадратна матрица каде што збирот на елементите во секој ред и колона е ист.
 Доколку матрицата е "Магичен квадрат", да се испечати "True" и да се променат елементите
 од главната и споредната дијагонала со збирот од елементите што е ист за секоја редица и колона.
 Во спротивно да се испечати "false".

 Input:
 4
 16 23 44 51
 32 36 32 34
 54 44 13 23
 32 31 45 26

 Result:
 True
 134 23 44 134
 32 134 134 34
 54 134 134 23
 134 31 45 134
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
    int zbir = 0;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        zbir += a[i][0];
    }
    for (int i = 0; i < n; i++) {
        int zbir_kolona = 0, zbir_redica = 0;
        for (int j = 0; j < n; j++) {
            zbir_redica += a[i][j];
            zbir_kolona += a[i][j];
        }
        if (zbir != zbir_kolona || zbir != zbir_redica) {
            flag = false;
            break;
        }
    }
    if (!flag)
        cout << "False" << endl;
    else {
        cout << "True" << endl;
        for (int i = 0; i < n; i++) {
            a[i][i] = zbir;
            for (int j = 0; j < n; j++) {
                if (i + j == n - 1)
                    a[i][j] = zbir;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}