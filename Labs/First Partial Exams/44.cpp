/*
 Александар пробува да комуницира со вас преку шифрирани пораки.
 Тој ни ги дава следните инструкции за како да ги дешифрираме за да се читливи бројките што сака да ни ги испрати:
 За даден број внесен на стандарден влез да се испечати превртен истиот во обратен редослед.
 При тоа, се внесува и карактер x за кој треба сите цифри на парните позиции на бројот да се заменат со тој карактер.
 Прво се внесува карактерот x па бројот. Да се испечати превртениот број со карактерот на парните позиции.
 Напомена: најдесната цифра се зима како 0-та цифра.
 Пример: бројот 12345 цифрите на парните позиции му се 5, 3 и 1; а превртен е 54321.

 Input:
 -
 3710307

 Result:
 -0-0-7-
 */

#include <iostream>

using namespace std;

int main() {
    int a;
    char x;
    cin >> x >> a;
    for (int i = 0; a > 0; a /= 10, i++) {
        if (i % 2 == 0)
            cout << x;
        else
            cout << a % 10;
    }
    return 0;
}
