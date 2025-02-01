/*
 Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
 Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
 Од тастатура се внесува природен број n ( n > 9).
 Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
 Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

 Input:
 5

 Result:
 Brojot ne e validen
*/

#include <iostream>

using namespace std;

int main() {
    int n, obraten = 0, brojac = 0, broj;
    bool ima = 0;
    cin >> n;
    if (n < 10)
        cout << "Brojot ne e validen" << endl;
    else {
        for (int i = n - 1; i > 0; i--) {
            broj = i;
            while (broj > 0) {
                int cifra = broj % 10;
                obraten = obraten * 10 + cifra;
                brojac++;
                broj /= 10;
            }
            if (obraten % brojac == 0) {
                cout << i << endl;
                break;
            }
            obraten = 0;
            brojac = 0;
        }
    }
    return 0;
}