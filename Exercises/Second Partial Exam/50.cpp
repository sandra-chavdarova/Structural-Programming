/*
 Write a program that will read a string (not longer than 100 characters) containing letters and digits.
 The program should print on the standard output the letters that are between the first and the second digit,
 left-to-right, including the bordering digits themselves.
 If there is only one digit in the string, the program should print all the letters till the end of the string.
 If there are no digits in the string the program should print out the message "No digits".
 Example:
 Axvdf7dbb3bdbd88B -> 7dbb3
 Isdv88mvndkv9d -> 88
 vnjis9kjsnvnv -> 9kjsnvnv
 dsfsrtt -> No digits

 Input:
 Isdv88mvndkv9d

 Result:
 88
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    int max = 100;
    char string[max + 1];
    cin.getline(string, max);
    int n = strlen(string), brojac = 0;
    for (int i = 0; i < n; i++) {
        if (isdigit(string[i]))
            brojac++;
    }
    if (brojac == 0)
        cout << "No digits" << endl;
    else if (brojac == 1) {
        int index = -1;
        for (int i = 0; i < n; i++) {
            if (isdigit(string[i]))
                index = i;
        }
        for (int i = index; i < n; i++) {
            cout << string[i];
        }
        cout << endl;
    } else {
        int start = -1;
        for (int i = 0; i < n; i++) {
            if (isdigit(string[i])) {
                start = i;
                break;
            }
        }
        for (int i = start; i < n; i++) {
            if (isdigit(string[i]) && i != start) {
                cout << string[i] << endl;
                break;
            } else
                cout << string[i];
        }
    }
    return 0;
}
