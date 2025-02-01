/*
 Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри) се додека не се внесе нешто различно од број.
 За секој број треба да се најде позицијата (од десно на лево) на првото појавување на најголемата цифра во составот на бројот
 (цифрата на единици се наоѓа на позиција 0).
 Потоа, да се испечати статистика за позициите на најдените цифри со максимална вредност во следниот формат:
 [позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]
 0: 2
 1: 3
 2: 1
 3: 1
 4: 1
 за броевите 97654 48654 12345 12343 1263 12443 12643 12777.

 Input:
 97654 48654 12345 12343 1263 12443 12643 12777 #

 Result:
 0: 2
 1: 3
 2: 1
 3: 1
 4: 1
*/

#include <iostream>

using namespace std;

int main() {
    int a;
    int pozicija = 0, pozicija0 = 0, pozicija1 = 0, pozicija2 = 0, pozicija3 = 0, pozicija4 = 0;
    while (cin >> a) {
        int najgolemaCifra = 0;
        for (int i = 0; i < 5; i++) {
            int cifra = a % 10;
            if (cifra > najgolemaCifra) {
                najgolemaCifra = cifra;
                pozicija = i;
            }
            a /= 10;
        }

        switch (pozicija) {
            case 0:
                pozicija0++;
                break;
            case 1:
                pozicija1++;
                break;
            case 2:
                pozicija2++;
                break;
            case 3:
                pozicija3++;
                break;
            case 4:
                pozicija4++;
                break;
        }
    }
    cout << 0 << ": " << pozicija0 << endl;
    cout << 1 << ": " << pozicija1 << endl;
    cout << 2 << ": " << pozicija2 << endl;
    cout << 3 << ": " << pozicija3 << endl;
    cout << 4 << ": " << pozicija4 << endl;
    return 0;
}