/*
 Да се симулира играње на играта змија (со бесконечна должина на змијата) за зададена секвенца на потези.
 Се задаваат димензии на нива (правоаголна матрица) и позицијата (ред, колона при што броењето почнува од 0) на јаболкото (целта).
 Змијата иницијално се наоѓа во горниот лев агол (поле 0,0) и е насочена надолу. За дадена секвенца од потези кои може да бидат:
 F - чекор напред (придвижување на полето кое е пред змијата),
 L - сврти лево (се придвижување на полето лево од главата на змијата во однос на тековниот правец на движење на змијата
    со што ова станува и тековен правец на движење на змијата) и
 R - сврти десно (се придвижување на полето десно од главата на змијата во однос на тековниот правец на движење на змијата
    со што ова станува и тековен правец на движење).
 Дoколку во некој од потезите змијата ја напушти нивата (излезе надвор од матрицата) или се гризне самата себе си
 (по втор пат стапне на исто поле) играта завршува - треба да се испечати GAME OVER Ouch.
 Ако стигне до полето на кое е јаболкото, играта завршува и треба да се испечати NJAM.
 Ако заврши низата со команди за движење, а не стигнала до јаболкото - играта завршува и се печати GAMEOVER.
 Во моментот кога ќе дојде до полето со јаболкото (дури и ако во низата има уште команди за чекори) играта завршува
 и се печати NJAM, а останатите чекори се игнорираат.
 Да се напише програма која за зададени димензии на нивата (M, N помали од 100), позиција на јаболкото K, L (0<=K<M, 0<=L<N)
 и команди за движење на змијата зададена како низа од знаците F, L и R (не подолга од 1000 знаци) ќе ја симулира играта.

 Input:
 4 5
 2 3
 FFLLRFR

 Result:
 NJAM


 Input:
 4 5
 2 3
 LRLLFFRFRFFLL

 Result:
 GAME OVER Ouch


 Input:
 14 8
 3 5
 LFFRRFFLFFLFRFF

 Result:
 GAMEOVER
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void R(int &i, int &j) {
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

void L(int &i, int &j) {
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
    int n, m, jabolkoI, jabolkoJ;
    cin >> n >> m >> jabolkoI >> jabolkoJ;
    int zmijaI = 0, zmijaJ = 0, moveI = 1, moveJ = 0;
    char komandi[1001];
    cin.get();
    cin.getline(komandi, 1000);
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = 0;
        }
    }
    a[0][0] = 1;
    int length = strlen(komandi);
    for (int i = 0; i < length; i++) {
        if (toupper(komandi[i]) == 'L') {
            L(moveI, moveJ);
        }
        if (toupper(komandi[i]) == 'R') {
            R(moveI, moveJ);
        }
        zmijaJ += moveJ;
        zmijaI += moveI;
        if (zmijaI == jabolkoI && zmijaJ == jabolkoJ) {
            cout << "NJAM" << endl;
            return 0;
        }
        if (zmijaI > n || zmijaI < 0 || zmijaJ > m || zmijaJ < 0) {
            cout << "GAME OVER Ouch" << endl;
            return 0;
        }
        if (a[zmijaI][zmijaJ] == 1) {
            cout << "GAME OVER Ouch" << endl;
            return 0;
        } else
            a[zmijaI][zmijaJ] = 1;
    }
    cout << "GAMEOVER" << endl;
    return 0;
}
