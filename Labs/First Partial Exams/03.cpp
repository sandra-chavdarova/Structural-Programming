/*
 Да се напише програма која за петцифрен број внесен од стандарден влез
 ќе ја пресмета сумата на цифрите на парните и непарните позиции соодветно.
 Напомена: Последната цифра во бројот се наоѓа на 0-та позиција.
 Појаснување: За бројот 54321 цифрата на 0-та позиција е 1, додека цифрата на 4-та позиција е 5.

 Input:
 54321

 Result:
 Sumata na cifrite na parnite pozicii e 9
 Sumata na cifrite na neparnite pozicii e 6
*/

#include <iostream>

using namespace std;

int main() {
    int a, parni = 0, neparni = 0;
    cin >> a;
    for (int i = a; i > 0; i /= 100) {
        parni += i % 10;
    }
    for (int i = a / 10; i > 0; i /= 100) {
        neparni += i % 10;
    }
    cout << "Sumata na cifrite na parnite pozicii e " << parni << endl;
    cout << "Sumata na cifrite na neparnite pozicii e " << neparni << endl;
    return 0;
}
