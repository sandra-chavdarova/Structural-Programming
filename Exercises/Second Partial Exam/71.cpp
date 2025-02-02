/*
 From SI read lines of text, none of which is longer than 80 characters.
 Write e program that will transform the input and print it out on the standard output.
 The output should contain only letters (all other characters are discarded), and each word should be printed in a separate line.

 Input:
 Voi5 ovaa 6d6ato$$tek!a ke
 ostanat09856 4453 sa5m2o
 bu!!4kv(((((i

 Result:
 Vo
 ovaa
 datoteka
 ke
 ostanat
 samo
 bukvi
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    int max = 2000;
    char line[max + 1];
    while (cin.getline(line, max)) {
        if (line[0] == '\0')
            continue;
        int n = strlen(line), j = 0;
        char zbor[max + 1];
        for (int i = 0; i <= n; i++) {
            if (!isspace(line[i]) && line[i] != '\0') {
                if (isalpha(line[i])) {
                    zbor[j] = line[i];
                    j++;
                }
            } else {
                if (j > 0) {
                    zbor[j] = '\0';
                    j = 0;
                    cout << zbor << endl;
                }
            }
        }
    }
    return 0;
}
