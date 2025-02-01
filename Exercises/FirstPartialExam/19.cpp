/*
 Read from SI unknown number of triplets of integers (three integers).
 The reading ends when the program can not read successfully read three integers.
 For each triplet of integers print out the two of them that have the minimum difference between them.
 First print the smaller one, and then the bigger integer. If two pairs of integers in the triplet have equal difference,
 then print out all the integers, ordered from the smallest to the largest.

 Example: if 5 1 7 is entered -> 5 - 1 = 4, 7 - 5 = 2, 7 - 1 = 6 -> 2 is the smallest difference -> 5 7 should be printed

 Input:
 5 1 7
 10 2 18

 Result:
 5 7
 2 10 18
*/

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (b > c) {
            int temp = b;
            b = c;
            c = temp;
        }
        if (a > c) {
            int temp = a;
            a = c;
            c = temp;
        }
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        int razlika1 = b - a;
        int razlika2 = c - b;
        if (razlika1 < razlika2) {
            cout << a << " " << b << endl;
        } else if (razlika2 < razlika1) {
            cout << b << " " << c << endl;
        } else if (razlika1 == razlika2) {
            cout << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}
