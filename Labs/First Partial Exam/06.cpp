/*
 Да се напише програма која од стандарден влез чита цел број(денови).
 На излез да се отпечати колку години, месеци и денови се тоа.
 Претпоставуваме дека сите месеци имаат 30 дена и секоја година има 365 дена.

 Input:
 2535

 Result:
 Years: 6, months: 11, days: 15
 */

#include <iostream>

using namespace std;

int main() {
    int denovi, meseci, godini;
    cin >> denovi;
    godini = denovi / 365;
    denovi = denovi % 365;
    meseci = denovi / 30;
    denovi = denovi % 30;
    cout << "Years: " << godini << ", months: " << meseci << ", days: " << denovi << endl;
    return 0;
}
