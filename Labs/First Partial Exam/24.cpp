/*
 Да се напише код којшто од стандарден влез ќе чита информации за фискални сметки.
 На стандарден влез се читаат 3 фискални сметки, кои се составени од парови на вредности (износ, тип_на_данок).
 пр.
 10000 A
 7500 B
 18000 F
 Каде што првата вредност во парот изнесува износот на фискалната сметка, додека пак втората вредност е карактер (A, B, C, D, F... Z)
 што означува каков тип на данок на додадена вредност се пресметува за тој артикал:
 А означува 18%
 B означува 10%
 C означува 5%
 D означува 0%
 Доколку се внесе различен карактер, се пресметува 15%.
 Доколку сметка надминува 30 000 денари се пресметува данок како на сметка од 30 000 денари.
 Сметките коишто имаат негативна сума, не се валидни сметки и се отфрлаат.
 Вкупниот поврат на ДДВ не може да надмине 2100 денари.
 Во првата линија да се испечати на стандарден излез колку ќе изнесува вкупниот ДДВ на фискалните сметки што се вчитани од стандарден влез.
 Во наредната линија да се испечати на стандарден излез колку ќе изнесува вкупниот поврат на ДДВ за фискалните сметки што се вчитани од стандарден влез.
 Повратокот на ДДВ се пресметува како 15% од вкупното ДДВ на фискалната сметка.

 Input:
 10000 A
 7500 B
 18000 F

 Result:
 Total VAT of the receipts is equal to: 5250den.
 Total refund VAT of the receipts is equal to: 787.5den.
 */

#include <iostream>

using namespace std;

int main() {
    int iznos;
    char tip;
    float vkupno = 0, povrat;
    for (int i = 0; i < 3; i++) {
        cin >> iznos >> tip;
        float danok;
        if (iznos > 30000) {
            iznos = 30000;
        }
        if (iznos > 0) {
            switch (tip) {
                case 'A':
                    danok = (float) iznos * 0.18;
                    break;
                case 'B':
                    danok = (float) iznos * 0.1;
                    break;
                case 'C':
                    danok = (float) iznos * 0.05;
                    break;
                case 'D':
                    danok = (float) iznos * 0;
                    break;
                default:
                    danok = (float) iznos * 0.15;
            }
            vkupno += danok;
        }
    }
    povrat = 0.15 * vkupno;
    if (povrat > 2100)
        povrat = 2100;
    cout << "Total VAT of the receipts is equal to: " << vkupno << "den." << endl;
    cout << "Total refund VAT of the receipts is equal to: " << povrat << "den." << endl;
    return 0;
}
