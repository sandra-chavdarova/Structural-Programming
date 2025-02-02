/*
 Read an array of N integers from standard input (first read the number N than the elements).
 Then call a recursive function on the array that will change on the following way:
 a_0=a_(N-1)=max( (a_0,a_(N-1) )
 a_1=a_(N-2)=max( (a_1,a_(N-2) )
 …
 where max is a function that returns the maximum of the two numbers.
 The function should return the number of switched elements (it only counts if the first number is smaller than the second one).
 Then print that number and the changed array.

 Input:
 5
 4 5 6 7 8

 Result:
 2
 8 7 6 7 8
*/

#include <iostream>

using namespace std;

int max(int a, int b) {
    if (a > b)
        return a;
    else if (b > a)
        return b;
    else
        return 0;
}

int tranformacija(int a[], int n, int i, int brojac) {
    if (n <= i)
        return brojac;
    else {
        if (max(a[i], a[n])) {
            if (a[i] > a[n]) {
                a[i] = a[n] = max(a[i], a[n]);
                return tranformacija(a, n - 1, i + 1, brojac);
            } else {
                a[i] = a[n] = max(a[i], a[n]);
                return tranformacija(a, n - 1, i + 1, brojac + 1);
            }
        } else
            return tranformacija(a, n - 1, i + 1, brojac);
    }
}

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int brojac = tranformacija(a, n - 1, 0, 0);
    cout << brojac << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}