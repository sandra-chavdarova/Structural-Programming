/*
 Let A = {a1, a2, ... an} is an array of integers. The size of the array n and the elements of the array are read from SI.
 Write a program that will transform the array so each element of the original array is replaced
 with the number of appearances of the least significant digit (the right most) in the number itself.
 Print the result array on the standard output.
 Compute the count of given digit in a number with separate recursive function.

 Input:
 5
 1 11 1121 111222112 22222

 Result:
 1 2 3 4 5
*/

#include <iostream>

using namespace std;

int broenje(int a, int cifra) {
    if (a < 10) {
        if (a == cifra)
            return 1;
        else
            return 0;
    } else {
        if (a % 10 == cifra)
            return 1 + broenje(a / 10, cifra);
        else
            return broenje(a / 10, cifra);
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        a[i] = broenje(a[i], a[i] % 10);
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
