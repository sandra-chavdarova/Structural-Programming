/*
 Write a program that reads lines no longer than 80 characters from SI. Each line consists of digits and letters.
 The program should print on SO each line transformed in such way that the letters will be concatenated next to each other,
 followed by the sum of all numbers that appear in the row.
 The numbers can be with more than one digit! If there are no numbers, print 0 at the end of the line.

 Input:
 7h3r3545h4d0wJu57B3h1ndM3
 5hr0ud1n63v3ryBr347h174k3

 Result:
 hrhdwJuBhndM3623
 hrudnvryBrhk596
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    int max = 80;
    char a[max + 1];
    while (cin.getline(a, max)) {
        if ('#' == a[0])
            break;
        int sum = 0;
        int n = strlen(a);
        for (int i = 0; i < n; i++) {
            int broj = 0;
            if (isdigit(a[i])) {
                broj = broj * 10 + (a[i] - '0');
                while (i + 1 < n && isdigit(a[i + 1])) {
                    broj = broj * 10 + (a[i + 1] - '0');
                    i++;
                }
            }
            sum += broj;
        }
        for (int i = 0; i < n; i++) {
            if (isalpha(a[i]))
                cout << a[i];
        }
        cout << sum << endl;
    }
    return 0;
}
