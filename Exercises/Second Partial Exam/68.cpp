/*
 Words (no longer than 20 letters and each in a new line) are read from SI.
 Write a program that will print the word that has the biggest number of different letters.
 Words that have less than four letters are not taken into account during the check.
 Do not make a difference between upper and lowercase letters.
 If there are more words that meet the criteria, the last one is printed.

 Input:
 To
 those
 whom
 Ive
 fought
 with
 and
 to
 those
 I
 dont
 know
 your
 name
 we
 fought
 by
 one
 another
 You
 did
 not
 die
 in
 vain

 Result:
 another
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    int max = 20, maximum = 0;
    char a[max + 1], zbor[max + 1];
    while (cin.getline(a, max)) {
        if ('#' == a[0])
            break;
        int n = strlen(a);
        if (n < 4)
            continue;
        int brojac = 0;
        for (int i = 0; i < n; i++) {
            bool flag = true;
            for (int j = 0; j < i; j++) {
                if (tolower(a[i]) == tolower(a[j])) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                brojac++;
            else
                break;
        }
        if (brojac >= maximum) {
            maximum = brojac;
            strncpy(zbor, a, max);
        }
    }
    cout << zbor << endl;
    return 0;
}