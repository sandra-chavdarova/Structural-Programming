/*
 Write a program that will print the contents read from SI coded.
 The coding is done letter by letter, so that each letter (only letters, not digits, dots, ...)
 is replaced with the letter 3 places after in the alphabet.
 In case of the letters at the end of the alphabet, the counting continues cyclic from the beginning of the alphabet.
 In the final coded text all letters are lowercase.
 Example letter a is coded to d, H is coded to k, p is coded to s, x is coded to a, etc.

 Input:
 Momentalno go testiram resenieto na mojata treta zadaca!

 Result:
 prphqwdoqr jr whvwludp uhvhqlhwr qd prmdwd wuhwd cdgdfd!
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void transformacija(char *string) {
    char temp;
    int n = strlen(string);
    for (int i = 0; i < n; i++) {
        if (isalpha(string[i])) {
            if (isupper(string[i])) {
                temp = tolower(string[i]);
                string[i] = temp;
            }
            if (int(string[i] + 3 > 'z'))
                string[i] = char(string[i] + 3 - 26);
            else
                string[i] = char(string[i] + 3);
        }
    }
}

int main() {
    int max = 500;
    char string[max + 1];
    while (cin.getline(string, max)) {
        transformacija(string);
        cout << string << endl;
    }
    return 0;
}
