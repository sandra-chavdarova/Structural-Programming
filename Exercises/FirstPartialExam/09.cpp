/*
 Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.).
 Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри.
 Доколку добиениот декаден збир е делив со 16 се печати Pogodok.
 Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6),
 се печати Poln pogodok инаку се печати самиот збир.
 Пример:
 влез: A 7 F 2 0 c A 5
 излез: 61
 (61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак последните цифри му се 1,6)

 Input:
 0
 1
 0
 0
 0
 1
 d
 0
 0
 0
 1
 .

 Result:
 Poln pogodok
*/

#include <iostream>

using namespace std;

int main() {
    char a;
    int zbir = 0;
    while (cin >> a) {
        if (a == '.')
            break;
        else if (a >= '0' && a <= '9')
            zbir += (a - '0');
        else {
            switch (a) {
                case 'A':
                    zbir += 10;
                    break;
                case 'a':
                    zbir += 10;
                    break;
                case 'B':
                    zbir += 11;
                    break;
                case 'b':
                    zbir += 11;
                    break;
                case 'C':
                    zbir += 12;
                    break;
                case 'c':
                    zbir += 12;
                    break;
                case 'D':
                    zbir += 13;
                    break;
                case 'd':
                    zbir += 13;
                    break;
                case 'E':
                    zbir += 14;
                    break;
                case 'e':
                    zbir += 14;
                    break;
                case 'F':
                    zbir += 15;
                    break;
                case 'f':
                    zbir += 15;
                    break;
            }
        }
    }
    int cifri = zbir % 100;
    if (zbir % 16 == 0) {
        if (cifri == 16)
            cout << "Poln pogodok" << endl;
        else
            cout << "Pogodok" << endl;
    } else
        cout << zbir << endl;
    return 0;
}