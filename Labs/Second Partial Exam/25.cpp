/*
 Од тастатура се чита број n а потоа и низа од n елементи.
 Потребно е низата да се трансформира така што максималниот и минималниот елемент ќе си ги заменат местата,
 а на останатите елементи ќе им се додаде разликата меѓу максималниот и минималниот елемент.
 Самата трансформација треба да се изврши во функцијата void transform (int *arr, int n).

 Input:
 4
 1 2 3 4

 Result:
 4 5 6 1
*/

#include <iostream>

using namespace std;

void transformacija(int *a, int n) {
    int min = *(a + 0), max = *(a + 0), indeksMin = 0, indeksMax = 0;
    for (int i = 1; i < n; i++) {
        if (*(a + i) < min) {
            min = *(a + i);
            indeksMin = i;
        }
        if (*(a + i) > max) {
            max = *(a + i);
            indeksMax = i;
        }
    }

    int razlika = max - min;
    for (int i = 0; i < n; i++) {
        if (indeksMin == i)
            *(a + i) = max;
        else if (indeksMax == i)
            *(a + i) = min;
        else
            *(a + i) += razlika;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    transformacija(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
