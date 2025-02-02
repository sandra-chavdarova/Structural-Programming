/*
 An array of integers is to be read from SI. First the number N (N<=100) is entered followed by N integers.
 Write a program that will transform the array in the following way: starting at the beginning of the array,
 for each element that is equal to the next element in the array,
 double the value of the first one and overwrite the second one with 0.
 After that, rearrange the array so that all the zeroes will be moved at the end of the array, keeping the order of the other elements.
 Print all the elements of the array on the SO in a single line, separated by space.
 Write separate functions for transforming the array and for reordering the elements.

 Example:
 6
 2 2 0 4 8 8
 (Intermediate: 4, 0, 0, 4, 16, 0)

 Output:
 4 4 16 0 0 0
*/

#include <iostream>

using namespace std;

void transformacija(int a[], int n) {
    for (int i = 0; i + 1 < n; i++) {
        if (a[i] == a[i + 1]) {
            a[i] *= 2;
            a[i + 1] = 0;
        }
    }
}

void redosled(int a[], int n) {
    int j = 0, b[n];
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            b[j] = a[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            b[j] = a[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    transformacija(a, n);
    redosled(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
