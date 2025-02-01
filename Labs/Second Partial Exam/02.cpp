/*
 Да се напише програма со која ќе се печатат најмалите k елементи од низата.
 Низата и бројот на најмалите елементи се внесуваат преку тастатура.

 Input 1:
 7 4
 16 12 5 49 48 47 20

 Result 1:
 4-te najmali elementi se: 5 12 16 20

 Input 2:
 10 5
 1 89 70 1 1 2 1 3 99 40

 Result 2:
 5-te najmali elementi se: 1 1 1 1 2
*/

#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int a[], int n) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n], najmali[k];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bubbleSort(a, n);

    cout << k << "-te najmali elementi se: ";
    for (int i = 0; i < k; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
