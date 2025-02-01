/*
 Во државата X е воведен прогресивен данок на личен доход. Потребно е да напишете програма
 која ќе им помогне на вработените во УЈП на државата X да го пресметува данокот на определен граѓанин.
 Од стандарден влез најпрво се читаат 5 броеви процент0, праг1, процент1, праг2, процент2,
 а потоа се чита и износот на примањата на граѓанинот.
 На екран треба да се испечати износот на данокот на личниот доход пресметан со прогресивна стапка.
 Објаснување за примерот.
 процент 0 = 10%
 праг 1 = 1000
 процент 1 = 20%
 праг 2 = 2500
 процент 2 = 30%
 износ на примања = 3800.
 Првите 1000 се оданочуваат со стапка 10%, па наредните 1500 се оданочуваат со 20% и останатите 1300 се оданочуваат со 30%. Резултат = 1000*0.1+1500*0.2+1300*0.3 = 790.

 Input:
 10 1000 20 2500 30
 3800

 Result:
 790
 */

#include <iostream>

using namespace std;

int main() {
    float procent0, prag1, procent1, prag2, procent2, posebenPrag, primanja;
    float prag3;
    float presmetka1, presmetka2, presmetka3, krajnaPresmetka;
    cin >> procent0 >> prag1 >> procent1 >> prag2 >> procent2 >> primanja;
    procent0 /= 100;
    procent1 /= 100;
    procent2 /= 100;
    posebenPrag = prag2 - prag1;
    prag3 = primanja - (prag1 + posebenPrag);
    if (primanja < prag1) {
        krajnaPresmetka = primanja * procent0;
        cout << krajnaPresmetka << endl;
        return 0;
    }
    if (primanja < prag2) {
        presmetka1 = prag1 * procent0;
        presmetka2 = (primanja - prag1) * procent1;
        krajnaPresmetka = presmetka1 + presmetka2;
        cout << krajnaPresmetka << endl;
        return 0;
    }
    presmetka1 = prag1 * procent0;
    presmetka2 = posebenPrag * procent1;
    presmetka3 = prag3 * procent2;
    krajnaPresmetka = presmetka1 + presmetka2 + presmetka3;
    cout << krajnaPresmetka << endl;
    return 0;
}
