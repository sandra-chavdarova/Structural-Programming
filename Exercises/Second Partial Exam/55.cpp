/*
 Read from SI lines. Find and print the row, where the ratio of digits/letters is largest.
 If there are more than one such rows print the last. No row is longer than 100 characters,
 and if in a row there are no letters, that row is ignored.

 Input:
 aaa123aa 222aa5a289
 aaaa cde 23aaaa
 45 ,, 56! 7
 222aa5a289 aaa123aa
 123 aaa 89994 ghj 90 xyz
 xyz ,. hgfd

 Result:
 222aa5a289 aaa123aa
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    int max = 100;
    float max_prosek = 0;
    char line[max + 1], result[max + 1];
    while (cin.getline(line, max)) {
        if (line[0] == '#')
            break;
        int n = strlen(line);
        bool letters = false;
        for (int i = 0; i < n; i++) {
            if (isalpha(line[i])) {
                letters = true;
                break;
            }
        }
        if (!letters)
            continue;
        float bukvi = 0, brojki = 0;
        for (int i = 0; i < n; i++) {
            if (isalpha(line[i]))
                bukvi++;
            if (isdigit(line[i]))
                brojki++;
        }
        float prosek = brojki / bukvi;
        if (prosek >= max_prosek) {
            max_prosek = prosek;
            strcpy(result, line);
        }
    }
    cout << result << endl;
    return 0;
}
