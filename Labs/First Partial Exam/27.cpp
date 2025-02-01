/*
 Од стандарден влез се читаат два телефонски броја и времетраење на разговорот во минути.
 Да се пресмета цената на повикот доколку знаеме дека првите 30 минути чинат 3 ден/мин,
 а после тие 30 мин цената на 1 минута е 2 ден.
 Дополнително доколку двата телефонски броја се на ист оператор да се пресмета 30% попуст.
 оператор1 ги користи (071, 072, 073)
 оператор2 ги користи (074, 075, 076)

 Input:
 076388299
 074387600
 45

 Result:
 84
 */

#include <iostream>

using namespace std;

int main() {
    int broj1, broj2, minuti, operator1, operator2;
    float cena;
    cin >> broj1 >> broj2 >> minuti;
    operator1 = broj1 / 1000000;
    operator2 = broj2 / 1000000;
    if (minuti <= 30)
        cena = minuti * 3;
    else
        cena = 30 * 3 + (minuti - 30) * 2;
    if ((operator1 == 71 or operator1 == 72 or operator1 == 73) and (operator2 == 71 or operator2 == 72 or
                                                                     operator2 == 73))
        cena -= cena * 30 / 100;
    if ((operator1 == 74 or operator1 == 75 or operator1 == 76) and (operator2 == 74 or operator2 == 75 or
                                                                     operator2 == 76))
        cena -= cena * 30 / 100;
    cout << cena << endl;
    return 0;
}
