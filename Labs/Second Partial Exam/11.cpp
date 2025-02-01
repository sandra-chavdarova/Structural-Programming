/*
 Од тастатура се чита димензија на квадратна матрица(максимална големина 100х100).
 Треба да се провери дали матрицата го задоволува следниот услов:
 секој елемент од главната дијагонала да биде еднаков со збирот на елементите десно (во истата редица) од тој елемент.
 Ако матрицата го исполнува условот истата треба да се испечати на екран, а во спротивно се  печати -1.

 Input:
 4
 7   1   2   4
 9   3   1   2
 5  10  4   4
 16 10 7   8

 Result:
 7   1   2   4
 9   3   1   2
 5  10 4   4
 16 10 7  8
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

    bool flag = true;
    for (int i = 0; i < n; i++) {
        int zbir = 0;
        if (i + 1 == n - 1)
            break;
        else {
            for (int j = i + 1; j < n; j++) {
                zbir += a[i][j];
            }
            if (a[i][i] == zbir)
                flag = true;
            else {
                flag = false;
                break;
            }
        }
    }

    if (flag) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    } else
        cout << -1 << endl;
    return 0;
}
