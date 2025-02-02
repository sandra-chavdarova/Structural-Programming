/*
 Write a fully recursive function triangle (n) which given the input argument n, prints a triangle from the numbers from 1 to n.
 Additional functions can be used, but no loops should be used.

 Input:
 4

 Result:
 1
 12
 123
 1234
*/

#include <iostream>

using namespace std;

void row(int n) {
    if (n == 1)
        cout << n;
    else {
        row(n - 1);
        cout << n;
    }
}

void triangle(int n) {
    if (n == 1)
        cout << n << endl;
    else {
        triangle(n - 1);
        row(n);
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    triangle(n);
    return 0;
}
