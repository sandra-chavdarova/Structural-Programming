/*
 An integer N is read from SI, followed by an array of N one-digit integers.
 Find the numbers A and B that repeat the most times in the array.
 Then print a rectangle with dimension A x B on the standard output in the following format:
 *****
 *****
 *****
 *****
 *****
 (A-lines with B-stars, where A is the smaller of the two numbers found).
 In the test cases, there are always exactly two numbers that appear the same most times.

 Example:
 Input:
 10
 2 5 3 7 5 3 3 6 4 5
 (3 appears 3 times, 5 appears 3 times, while the others are less frequent)

 Result:
 * * * * *
 * * * * *
 * * * * *
*/

#include <iostream>

using namespace std;

int main() {
    int n, A, B;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // prv broj
    int max = 0;
    for (int i = 0; i < n; i++) {
        int brojac = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                brojac++;
        }
        if (brojac > max) {
            max = brojac;
            A = a[i];
        }
    }
    // vtor broj
    max = 0;
    for (int i = 0; i < n; i++) {
        int brojac = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j] && a[i] != A)
                brojac++;
        }
        if (brojac > max) {
            max = brojac;
            B = a[i];
        }
    }
    if (A > B)
        swap(A, B);
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
