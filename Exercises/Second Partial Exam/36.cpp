/*
 Од стандарден влез се внесува текст(се додека не се сигнализира EOF).
 Да се напише програма која ќе го отпечати зборот со максимална должина во кој не се појавува буква
 од четвртиот ред на тастатурата (“asdfghjk”). За збор се смета секвенца составена само од букви
 и одвоена со најмалку едно празно место од останатиот дел од текстот.
 Во текстот нема зборови подолги од 30 знаци.
 Да не се прави разлика помеѓу мали и големи букви.
 Доколку нема таков, да се испечати„NO SUCH WORD“.

 Input:
 wHere
 wiLl
 the
 reUnion
 takE
 Place
 #

 Result:
 reUnion
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

bool proverka(char a) {
    char bukvi[9] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    for (int i = 0; i < 9; i++) {
        if (tolower(a) == bukvi[i])
            return false;
    }
    return true;
}

int main() {
    int max = 10000, maxLength = 0;
    char a[max + 1], zbor[max + 1];
    while (cin.getline(a, max)) {
        if (a[0] == '#')
            break;
        int n = strlen(a);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (!proverka(a[i])) {
                flag = false;
                break;
            }
        }
        if (flag && n > maxLength) {
            maxLength = n;
            strncpy(zbor, a, max);
        }
    }
    if (maxLength > 0)
        cout << zbor << endl;
    else
        cout << "NO SUCH WORD" << endl;
    return 0;
}