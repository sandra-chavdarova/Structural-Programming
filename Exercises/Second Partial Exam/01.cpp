/*
 Се внесуваат низи од значи од стандарден влез.
 Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во речениците.
 Појавата на големи и мали букви да се игнорира.
 Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви.
 Потоа во нов ред се печати бројот на појавувања на паровите самогласки.
 Читањето завршува кога ќе се прочита знакот #.

 Пример:
 IO is short for Input Output
 medioio medIo song
 #
 Излез:
 io
 ou
 io
 oi
 io
 io
 6

 Input:
 Why so serious?
 #

 Result:
 io
 ou
 2
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

bool samoglaska(char znak) {
    if (znak == 'a' || znak == 'e' || znak == 'i' || znak == 'o' || znak == 'u') {
        return true;
    } else
        return false;
}

int main() {
    int const max = 101;
    char string[max + 1];
    int brojac = 0;
    while (cin.getline(string, max)) {
        if (strcmp(string, "#") == 0)
            break;
        for (int i = 0; i + 1 < strlen(string); i++) {
            char samoglaski[3];
            char znak1 = tolower(string[i]);
            char znak2 = tolower(string[i + 1]);
            if (samoglaska(znak1) && samoglaska(znak2)) {
                brojac++;
                samoglaski[0] = znak1;
                samoglaski[1] = znak2;
                samoglaski[2] = '\0';
                cout << samoglaski << endl;
            }
        }
    }
    cout << brojac << endl;
    return 0;
}
