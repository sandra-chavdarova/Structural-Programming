/*
 Write a program that will read from SI words (each in a separate row) no longer than 30 letters.
 Find all the words that define a palindrome only with the vowels they contain
 (after making the opposite word of the given one, the vowels have not changed their indexes within the word).
 Print these words on a standard output. The appearance of uppercase and lowercase letters should be ignored.

 Input:
 KalAbaLAm
 BananaS
 WooooSH
 ANMA

 Result:
 KalAbaLAm
 BananaS
 ANMA
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

bool vowel(char letter) {
    char a = tolower(letter);
    return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
}

int main() {
    int max = 30;
    char a[max + 1];
    while (cin.getline(a, max)) {
        if ('#' == a[0])
            break;
        int n = strlen(a);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (vowel(a[i])) {
                if (tolower(a[i]) != tolower(a[n - 1 - i])) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << a << endl;
    }
    return 0;
}
