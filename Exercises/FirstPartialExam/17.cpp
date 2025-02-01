/*
 One number is interesting if his flipped number is divisible by the number of digits it contains.
 The flipped number is composed of the same digits, but in opposite order (ex. 653 is flipped of the number 356).
 Read from SI one integer n ( n > 9). Find and print the largest integer smaller than n that is "interesting".
 If the read number is not valid print a message "The number is invalid".

 Input:
 5

 Result:
 The number is invalid
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 9)
        cout << "The number is invalid" << endl;
    else {
        for (int j = n - 1; j > 0; j--) {
            int obraten = 0, brojac = 0;
            int broj = j;
            for (int i = broj; i > 0; i /= 10) {
                int cifra = i % 10;
                obraten = obraten * 10 + cifra;
                brojac++;
            }
            if (obraten % brojac == 0) {
                cout << j << endl;
                break;
            }
        }
    }
    return 0;
}
