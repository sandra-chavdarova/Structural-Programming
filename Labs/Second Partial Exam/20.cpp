/*
 Oд стандарден влез се читаат броеви се додека не се прочита нешто што не е број.
 За сите броеви кои што се палиндроми на екран да се испечати сума на цифри од кои што е составен бројот,
 за броевите кои што не се палиндроми потребно е на екран да се испечати од колку цифри е составен бројот.
 Проверка дали бројот е палиндром, колкава е сумата на цифри или од колку цифри е составен бројот да се реализираат со посебни функции.
 Дополнително функцијата за броење на цифри на број направете ја рекурзивна.

 Input:
 1221
 123
 717
 8258
 28
 .

 Result:
 6
 3
 15
 4
 2
*/

#include <iostream>

using namespace std;

int broenje(int n) {
    if (n == 0)
        return 0;
    else
        return 1 + broenje(n / 10);
}

int sum(int n) {
    int zbir = 0;
    for (int i = n; i > 0; i /= 10) {
        zbir += i % 10;
    }
    return zbir;
}

int palindrom(int n) {
    int obraten = 0;
    for (int i = n; i > 0; i /= 10) {
        obraten = obraten * 10 + i % 10;
    }
    if (obraten == n)
        return sum(n);
    else
        return broenje(n);
}

int main() {
    int n;
    while (cin >> n) {
        int rezultat = palindrom(n);
        cout << rezultat << endl;
    }
    return 0;
}
