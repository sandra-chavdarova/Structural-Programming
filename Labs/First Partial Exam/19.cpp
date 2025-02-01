/*
 Игор сака да направи овошна салата. За таа цел оди во маркет каде цените се следните:
 Цената на 100 грама јаболка е 30 денари,
 цената на 100 грама малини е 50 денари и
 цената на 100 грама банани е 40 денари.
 Доколку купи 200 грама од еден вид на овошје (јаболка/малини/банани) добива 30% попуст,
 а доколку купи 500 грама или повеќе исто така од еден вид на овошје добива 50% попуст.
 (пример. ќе добие попуст ако купи 500 грама само малини не вкупно 500грама од сите овошја)
 Дополнително: Исто така при наплата проверуваме дали Игор сака да искористи 140 денари од својот дневен студентски оброк.
 Доколку ДА 140 денари се одземаат од целокупната сума, во спротивно сумата останува непроменета. Колку денари ќе треба да доплати Игор?
 Појаснување за влезните параметри: имаме колку грама сака да купи од секое овошје соодветно според редоследот
 јаболка, малини, банани и 1 или 0 во зависност дали сака да плати 140ден со својата студентска картичка или не.

 Input:
 100
 200
 600
 1

 Result:
 80
 */

#include <iostream>

using namespace std;

int main() {
    double jabolka, malini, banani, vkupno;
    int obrok;
    cin >> jabolka >> malini >> banani >> obrok;
    double cena_jabolka = jabolka * 0.3;
    double cena_malini = malini * 0.5;
    double cena_banani = banani * 0.4;
    vkupno = cena_banani + cena_malini + cena_jabolka;
    double popust = 0;
    if (jabolka == 200)
        popust += 0.3 * cena_jabolka;
    if (malini == 200)
        popust += 0.3 * cena_malini;
    if (banani == 200)
        popust += 0.3 * cena_banani;
    if (jabolka >= 500)
        popust += 0.5 * cena_jabolka;
    if (malini >= 500)
        popust += 0.5 * cena_malini;
    if (banani >= 500)
        popust += 0.5 * cena_banani;
    vkupno -= popust;
    if (obrok)
        vkupno -= 140;
    cout << vkupno << endl;
    return 0;
}
