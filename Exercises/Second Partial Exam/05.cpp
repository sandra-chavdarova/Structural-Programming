/*
 Од стандарден влез се чита ливче во спортска обложувалница.
 Во првиот ред е запишана сумата на уплата (цел број).
 Потоа во секој нареден ред кој се чита од стандарден влез (се додека не се прочита знакот #) е запишан по еден тип во следниот формат:
 ab12 1 1.25
 Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2),
 додека третиот број е коефициентот (реален број).
 Ваша задача е да го испечатите типот со најголем коефициент како и можната добивка на ливчето.
 Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.
 Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.

 Input:
 100
 ab12 1 1.2
 c234 2 2.0
 #

 Result:
 c234 2 2
 240
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    float suma;
    cin >> suma;
    char sifra[10], maxSifra[10];
    int tip, maxTip = 0;
    float koef, maxKoef = 1;
    while (true) {
        cin >> sifra;
        if ('#' == sifra[0])
            break;
        cin >> tip >> koef;
        suma = suma * koef;
        if (koef > maxKoef) {
            maxKoef = koef;
            maxTip = tip;
            strncpy(maxSifra, sifra, 9);
        }
    }
    cout << maxSifra << " " << maxTip << " " << maxKoef << endl;
    cout << suma << endl;
    return 0;
}
