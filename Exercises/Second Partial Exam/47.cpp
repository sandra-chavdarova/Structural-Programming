/*
 Write a recursive function that will find the number of odd numbers of an array of integers.
 The function accepts as arguments the array for which the number of odd numbers is required and the total number of elements in the array.
 The function is given with the following prototype: int Odd (int a [], int n);
 Also write the main () function to test the Odd function.

 Input:
 25
 -1 -2 -5 5 7 -7 5 100 -6 -2 6 -6 -2 -9 -110 -24 -55 2 4 6 8 10 17 24 -25

 Result:
 10
*/

#include <iostream>

using namespace std;

int odd(int a[], int n) {
    if (n == 0) {
        if (a[n] % 2)
            return 1;
        else
            return 0;
    } else {
        if (a[n] % 2)
            return 1 + odd(a, n - 1);
        else
            return odd(a, n - 1);
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int rezultat = odd(a, n - 1);
    cout << rezultat << endl;
    return 0;
}
