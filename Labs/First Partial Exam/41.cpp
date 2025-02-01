/*
 Да се напише код којшто ќе и помогне на една продавница во пресметките на попустите на одредени артикли.
 Попустите се означуваат со различна буква и тоа
 А == 20%
 B == 50%
 C == 70%
 D == 0% nema popust
 Од стандарден влез најпрвин се чита број на артикли кои сака купувачот да ги купи,
 а потоа како парови се внесуваат цената и видот на попуст за секој од посакуваните артикли.
 Да се испечати колку ќе биде сумата што купувачот ќе треба да ја плати вклучувајќи го попустот за секој од артиклите соодветно.
 Исто така, во нов ред да се испечати и колку изнесува попустот на купувачот во денари односно колку денари заштедил.

 Input:
 4
 180 B
 340 C
 250 D
 540 A

 Result:
 874
 436
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    float cena, vkupno = 0, popust = 0;
    char tip;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cena >> tip;
        float procent;
        switch (tip) {
            case 'A':
                procent = 0.2;
                break;
            case 'B':
                procent = 0.5;
                break;
            case 'C':
                procent = 0.7;
                break;
            default:
                procent = 0;
        }
        vkupno += cena - cena * procent;
        popust += cena * procent;
    }
    cout << vkupno << endl << popust << endl;
    return 0;
}
