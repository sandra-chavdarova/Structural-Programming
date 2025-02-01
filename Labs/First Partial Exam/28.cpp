/*
 Марта и нејзините 3 другарки сакаат да одат на кино и купуваат билети.
 Иницијалната цена на еден билет за сите филмови е 200 денари, но
 доколку филмот  комедија се доплаќа 20 денари,
 доколку филмот е акција се доплаќа 40 денари,
 доколку филмот е романса се доплаќа 30 денари.
 Освен картите кои сакаат да ги купат тие сакаат да купат и нешто за пиење и грицкање. Менито е следното:
 Пијалоци:                                                     Пуканки:
 Вода: 80ден                                                   големина S: 100ден
 Fanta, CocaCola, Sprite: 100ден                               големина M: 150ден
 IceTea: 120ден.                                               големина L: 200ден.

 Да се пресмета која ќе биде вкупната цена што Марта и нејзините другарки ќе треба да ја платат.
 Дополнително доколку тие одлучат да одат во Среда и платат со нивната VISA картичка за вредноста од 2 билети
 ќе добијат 4 (односно добиваат 50% попуст на купените билети без разлика за кој филм станува збор)
 Објаснување за input
 вид на филм:  action
 големина на пуканки:  L
 број на пакувања пуканки:  2
 вид на пијалок:  Fanta
 број на пијалоци:  3
 Кој ден ќе гледа филм:  Wednesday
 VISA картичка:  1 (ДА) или 0 (НЕ)

 Input:
 action
 S
 4
 Fanta
 3
 Wednesday
 1

 Result:
 1180
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string film, goleminaPukanki, vidPijalok, den;
    int brojPukanki, brojPijaloci, visa = 0;
    float cena = 4 * 200;
    cin >> film >> goleminaPukanki >> brojPukanki >> vidPijalok >> brojPijaloci >> den >> visa;
    // Film
    if (film == "comedy")
        cena += 4 * 20;
    if (film == "action")
        cena += 4 * 40;
    if (film == "romance")
        cena += 4 * 30;
    //Den i visa
    if (den == "Wednesday" and visa == 1)
        cena -= cena * 50 / 100;
    //Pijaloci
    if (vidPijalok == "Water")
        cena += (80 * brojPijaloci);
    else if (vidPijalok == "Fanta" || vidPijalok == "CocaCola" || vidPijalok == "Sprite")
        cena += (100 * brojPijaloci);
    else if (vidPijalok == "IceTea")
        cena += (120 * brojPijaloci);
    //Pukanki
    if (goleminaPukanki == "S")
        cena += (100 * brojPukanki);
    else if (goleminaPukanki == "M")
        cena += (150 * brojPukanki);
    else if (goleminaPukanki == "L")
        cena += (200 * brojPukanki);
    cout << cena << endl;
    return 0;
}
