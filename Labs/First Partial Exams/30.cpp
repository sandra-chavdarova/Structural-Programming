/*
 Да се напише програма која што за вчитан датум како влезна променлива (DD MM GGGG)
 ќе испечати на  излез порака 1 или 0 во зависност од тоа дали внесениот датум е правилен или не.
 Напомена: За проверка на валидноста на датумот разгледајте ги следниве потточки:
 •	за датумот 29.02. да се внимава дали станува збор за престапна година
    (престапна година е секоја година која што е делива со 400 или пак е делива со 4, но не и со 100)
 •	дали месецот е број помеѓу 1 и 12
 •	дали денот одговара со бројот на денови во тој месец

 Input:
 1 6 1992

 Result:
 1
 */

#include <iostream>

using namespace std;

int main() {
    int den, mesec, godina;
    bool validnost = true;
    cin >> den >> mesec >> godina;
    if (mesec < 1 || mesec > 12)
        validnost = false;
    if ((mesec % 2 && mesec < 8) || (mesec % 2 == 0 && mesec > 7)) {
        if (den > 31 || den < 1)
            validnost = false;
    } else {
        if (mesec == 2) {
            if ((godina % 400 == 0 || godina % 4 == 0) && godina % 100 != 0)
                if (den > 29 || den < 1)
                    validnost = false;
        } else if (den > 30 || den < 1)
            validnost = false;
    }
    if (validnost)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
