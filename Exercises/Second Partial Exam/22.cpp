/*
 Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци.
 Низите знаци содржат букви, цифри и специјални знаци, а секоја од нив не е поголема од 50 знаци.
 Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата А1c најмалку 2 пати
 (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) според редоследот како што се прочитани од влезот.
 При печатење на зборовите, сите алфабетски знаци треба да се испечатат со мали букви.

 Input:
 6
 Ekjqh!!lkjsdh
 A1c01АA1c92
 12A1cwwA1cxy
 12A1cwwA1bxy
 аA1cwA1cA1ccA1cxab
 nemaA1c_povekjepati

 Result:
 а1c01аа1c92
 12а1cwwа1cxy
 аа1cwа1cа1ccа1cxab
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    int const max = 50;
    char string[max + 1];
    int n;
    cin >> n;
    cin.ignore();
    for (int b = 0; b < n; b++) {
        cin.getline(string, max);
        int length = strlen(string);
        char lowercase[max + 1];
        for (int i = 0; i < length + 1; i++) {
            lowercase[i] = tolower(string[i]);
        }
        int brojac = 0;
        for (int i = 0; i < length - 2; i++) {
            if (lowercase[i] == 'a' && lowercase[i + 1] == '1' && lowercase[i + 2] == 'c')
                brojac++;
        }
        if (brojac >= 2) {
            cout << lowercase << endl;
        }
    }
    return 0;
}
