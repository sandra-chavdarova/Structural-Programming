/*
 Од стандарден влез се чита број n а потоа се чита и низа составена од n реални броеви.
 На екран да се испечати елементот кој што е најблиску до средната вредност на елементите на низата.

 Input:
 6
 64.1 58.0 38.2 9.0 60.5 18.5

 Result:
 38.20
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    float a[n], zbir = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        zbir += a[i];
    }
    float prosek = (float) zbir / (float) n;
    float element = a[0], razlika = fabs(a[0] - prosek);
    for (int i = 1; i < n; i++) {
        if (fabs(a[i] - prosek) < razlika) {
            razlika = fabs(a[i] - prosek);
            element = a[i];
        }
    }
    cout << fixed << setprecision(2) << element << endl;

    return 0;
}
