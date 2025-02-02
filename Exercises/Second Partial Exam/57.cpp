/*
 Write a program that will read from SI array of natural numbers (not more than 100).
 Print all the elements of the array that represent strong numbers (each in new line).
 One number is strong if the sum of factorials of each of his digits is equal to the number itself.
 Example, number 145 is strong because:
 145 = 1! + 4! + 5!
 If a number is strong should be checked in a separate function, and for computing factorial
 a separate recursive function should be implemented and used.

 Input:
 2
 5034
 546

 Result:
 Strong numbers:
*/

#include <iostream>

using namespace std;

int faktoriel(int a) {
    if (a == 1 || a == 0)
        return 1;
    else
        return a * faktoriel(a - 1);
}

int zbir(int a) {
    if (a == 0)
        return 0;
    else
        return faktoriel(a % 10) + zbir(a / 10);
}

bool strong(int a, int b) {
    return a == b;
}

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Strong numbers:" << endl;
    for (int i = 0; i < n; i++) {
        if (strong(a[i], zbir(a[i])))
            cout << a[i] << endl;
    }
    return 0;
}
