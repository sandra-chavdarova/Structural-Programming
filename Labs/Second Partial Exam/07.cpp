/*
 Се чита низа од n цели броеви. Провери дали низата е специјална.
 Ако од сите броеви на парни позиции 50% или повеќе се парни броеви,
 и од сите броеви на непарна позиција 30% или помалку се непарни броеви,
 тогаш низата е специјална. Испечати 1 ако е низата специјална, испечати 0 ако не е.

 Input 1:
 5
 2 4 3 5 2

 Result 1:
 0


 Input 2:
 12
 3 2 4 5 3 1 9 6 5 4 3 5

 Result 2:
 0
*/

#include <iostream>

using namespace std;

int main() {
    int n, parni = 0, neparni = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 1 && i % 2 == 1)
            neparni++;
        else if (a[i] % 2 == 0 && i % 2 == 0)
            parni++;
    }
    float procent_parni = (float) parni / (float) n * 100;
    float procent_neparni = (float) neparni / (float) n * 100;
    if (procent_neparni <= 30 && procent_parni >= 50)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
