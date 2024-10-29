/*
 За еден студент се читаат освоени поени од 5 активности за еден предмет.
 Услов за еден предмет да биде положен е да се имаат над 50 освоени поени.
 Ако студентот има 0-50 поени не го положил предметот, ако има 51-60 го положил со 6,
 61-70 го положил со 7, 71-80 го положил со 8, 81-90 го положил со 9 и над 90 го положил со 10.
 Да се испечати оценката која ја имал студентот,неговите поени и да се испечати
 Ima uslov za povisoka ocenka доколку има услов да добие повисока оценка,
 а во спротивно да се испечати Nema uslov za povisoka ocenka.
 Услов за повисока оценка има само ако недостига 1 поен за добивање на повисока оценка.

 Input:
 30 40 5 10 3

 Result:
 Ocenka: 9, poeni: 88
 Nema uslov za povisoka ocenka

 */

#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int zbir = a + b + c + d + e;
    bool uslov = false;
    if (zbir % 10 == 0)
        uslov = true;
    if (zbir <= 50) {
        cout << "Predmetot ne e polozen" << endl;
        return 0;
    } else {
        if (zbir <= 60)
            cout << "Ocenka: " << 6 << ", poeni: " << zbir << endl;
        else if (zbir <= 70)
            cout << "Ocenka: " << 7 << ", poeni: " << zbir << endl;
        else if (zbir <= 80)
            cout << "Ocenka: " << 8 << ", poeni: " << zbir << endl;
        else if (zbir <= 90)
            cout << "Ocenka: " << 9 << ", poeni: " << zbir << endl;
        else if (zbir <= 100)
            cout << "Ocenka: " << 10 << ", poeni: " << zbir << endl;
    }
    if (uslov && zbir <= 90)
        cout << "Ima uslov za povisoka ocenka" << endl;
    else if (!uslov)
        cout << "Nema uslov za povisoka ocenka" << endl;
    return 0;
}
