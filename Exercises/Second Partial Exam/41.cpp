/*
 Еден желка-робот може да се движи низ рамнина само во насока паралелна на оските (x и y)
 и да ротира околу тековната позиција за 90º и тоа или налево или надесно.
 На почетокот желката е позиционирана во координатниот почеток и е свртена нагоре (гледа во правец на позитивната насока на y оската).
 Од тастатура се внесуваат командите за движење на роботот како низа од знаците ‘F’, ‘R’ и ‘L’ кои значат F –чекор напред,
 R –заврти се во десно и L –заврти се во лево.
 Напишете програма која ќе ја отпечати финалната позиција на желката (како пар целобројни координати x, y) по извршената серија на команди.
 Серијата команди завршува со кој било знак кој не е ‘F’, ‘R’ или ‘L’.
 (Со командите ‘L’ и ‘R’ не се изведува чекор, само се менува насоката во која е свртена желката.)

 Input:
 FRFLF.

 Result:
 2 1
*/

#include <iostream>
#include <cctype>

using namespace std;

void L(int &i, int &j) {
    if (i == 1 && j == 0) {
        i = 0;
        j = -1;
    } else if (i == 0 && j == 1) {
        i = 1;
        j = 0;
    } else if (i == -1 && j == 0) {
        i = 0;
        j = 1;
    } else if (i == 0 && j == -1) {
        i = -1;
        j = 0;
    }
}

void R(int &i, int &j) {
    if (i == 1 && j == 0) {
        i = 0;
        j = 1;
    } else if (i == 0 && j == 1) {
        i = -1;
        j = 0;
    } else if (i == -1 && j == 0) {
        i = 0;
        j = -1;
    } else if (i == 0 && j == -1) {
        i = 1;
        j = 0;
    }
}

int main() {
    int pozicijaI = 0, pozicijaJ = 0, moveI = 1, moveJ = 0;
    char a;
    while (cin >> a) {
        if (toupper(a) != 'R' && toupper(a) != 'L' & toupper(a) != 'F')
            break;
        if (toupper(a) == 'F') {
            pozicijaJ += moveJ;
            pozicijaI += moveI;
        }
        if (toupper(a) == 'R') {
            R(moveI, moveJ);
        }
        if (toupper(a) == 'L') {
            L(moveI, moveJ);
        }
    }
    cout << pozicijaI << " " << pozicijaJ << endl;
    return 0;
}
