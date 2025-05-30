/*
 Од стандарден влез се чита цел број n. Потоа се вчитуваат n низи од цели броеви,
 при што за секоја прво се внесува должината на низата, а потоа сите елементи на низата, па на крај бројот k.
 Да се напише програма која за секоја низа ќе ја трансформира истата, т.ш. секој k-ти елемент прво ќе го помножи со неговиот реден број во низата, потоа ќе го одземе неговиот следбеник.
 Доколку к-тиот елемент нема следбеник, се собира со неговиот претходник.
 На пример, ако е дадена следната низа:
 1 2 3 4 5 6 7 8, за k=2 се добива
 1 1 3 11 5 29 7 71
 Да се испечатат сите трансформирани низи.

 Input:
 5
 4
 1 2 3 4
 3
 5
 1 2 3 4 5
 2
 8
 1 6 7 3 1 6 8 2
 4
 9
 1 5 3 6 8 23 12 65 8
 2
 11
 1 5 43 6 8 6 4 2 23 65 44
 5

 Result:
 1 2 5 4
 1 1 3 11 5
 1 6 7 11 1 6 8 24
 1 7 3 16 8 126 12 512 8
 1 5 43 6 34 6 4 2 23 606 44
*/

#include <iostream>

using namespace std;

int main() {
    int broj;
    cin >> broj;
    for (int b = 0; b < broj; b++) {
        int n, k;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        for (int i = k - 1; i < n; i += k) {
            if (i + 1 < n)
                a[i] = a[i] * (i + 1) - a[i + 1];
            else
                a[i] = a[i] * (i + 1) + a[i - 1];
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
