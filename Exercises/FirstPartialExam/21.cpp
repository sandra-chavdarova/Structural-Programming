/*
 A whole number N greater than 0 is entered from the SI followed by N pairs of natural numbers greater than 10.
 Write a program that for every pair of entered numbers will check if the number obtained
 by moving the last digit of the first number on its first place is greater that the second number in the pair or not.
 Print YES if the condition is satisfied or NO if the condition is not satisfied on the standard output
 in a single line for each pair of numbers.

 (Example for moving the last digit of a number on its first place: 1234 -> 4123, 98700 -> 9870).
 If the numbers 3456 and 6210 are entered as a pair YES should be printed since 6345 > 6210.

 Input:
 4
 56 4532
 423 90
 90 300
 543 300

 Result:
 NO
 YES
 NO
 YES
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a <= 10 || b <= 10)
            continue;
        else {
            int brojac = 0;
            for (int j = a; j > 0; j /= 10)
                brojac++;
            int novoA = a % 10;
            for (int j = 1; j < brojac; j++) {
                novoA *= 10;
            }
            novoA = novoA + a / 10;
            if (novoA > b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}