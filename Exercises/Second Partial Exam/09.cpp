/*
 Да се имплементира рекурзивна функција која за низа од цели броеви
 a_0, a_1, ..., a_n-1 ќе ја пресмета вредноста на непрекинатата дропка дефинирана како:

 v = a_0 + 1/(a_1 + … +1/(a_(n-2)+1/(n-1)))
 Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100).
 Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.

 Input:
 50
 50 8 43 32 29 4 23 26 17 16 30 16 20 42 41 24 36 27 38 43 22 10 27 14 48 21 20 40 36 13 10 28 33 3 8 3 6 49 23 23 12 31 37 33 12 47 32 42 16 1

 Result:
 50.1246
*/

#include <iostream>

using namespace std;

// float kolicnik(float a[], int n, int m) {
//     if (n == m)
//         return a[n];
//     else
//         return a[n] + 1 / kolicnik(a, n + 1, m);
// }

float kolicnik(float a[], int n) {
    if (n == 1)
        return a[0];
    else
        return a[0] + 1 / kolicnik(a + 1, n - 1);
}

int main() {
    int n;
    float a[100];
    cin >> n;
    int m = n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    float rezultat = kolicnik(a, n);
    cout << rezultat << endl;
    return 0;
}

