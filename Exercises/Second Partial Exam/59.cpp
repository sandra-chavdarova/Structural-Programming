/*
 N positive integers are entered from the standard input and stored in an array a (N <100).
 Also, a single-digit integer k is entered. Write a function that will find the maximum of the abbreviated numbers of the elements
 in the array a and provide a call to that function in the main () function.
 A given element of the array is abbreviated as follows: all digits smaller than or equal to k are deleted from the number.
 For example: If k = 3 and a[0] = 12345, then abbreviated a[0] becomes 45,
 if a[1] = 458763, a[1] becomes 45876, and a[2] = 112 is shortened to a[2] = 0. The maximum abbreviated number is 45876.

 Input:
 3
 12365
 98765
 654
 2

 Result:
 98765
*/

#include <iostream>

using namespace std;

int max(int a[], int n) {
    int broj = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > broj)
            broj = a[i];
    return broj;
}

int abbreviated(int a, int k) {
    int broj = 0, nula = 1;
    for (int i = a; i > 0; i /= 10) {
        int cifra = i % 10;
        if (cifra > k) {
            broj = cifra * nula + broj;
            nula *= 10;
        }
    }
    return broj;
}

int main() {
    int n, a[100], b[100], k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        b[i] = abbreviated(a[i], k);
    }
    int rezultat = max(b, n);
    cout << rezultat << endl;
    return 0;
}
