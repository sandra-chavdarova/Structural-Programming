/*
 На стандарден влез се читаат два броја a и b.
 Ваша задача е да ја најдете најголемата непарна цифра на секој број во опсег [a,b].
 Функцијата за наоѓање на најголема непарна цифра мора да е рекурзивна.
 Напомена: ако бројот нема непарни цифри се печати 0.
 Печатење на секој број и негова цифра е во формат: број -> цифра

 Input:
 0 20

 Result:
 0 -> 0
 1 -> 1
 2 -> 0
 3 -> 3
 4 -> 0
 5 -> 5
 6 -> 0
 7 -> 7
 8 -> 0
 9 -> 9
 10 -> 1
 11 -> 1
 12 -> 1
 13 -> 3
 14 -> 1
 15 -> 5
 16 -> 1
 17 -> 7
 18 -> 1
 19 -> 9
 20 -> 0
*/

#include <iostream>

using namespace std;

int neparna_cifra(int n, int najgolema) {
    if (n == 0) {
        if (najgolema == 0)
            return -1;
        else
            return najgolema;
    } else {
        int cifra = n % 10;
        if ((cifra % 2 == 1) && (cifra > najgolema)) {
            return neparna_cifra(n / 10, cifra);
        } else {
            return neparna_cifra(n / 10, najgolema);
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        int cifra = neparna_cifra(i, 0);
        if (cifra == -1 && i % 2 == 0)
            cout << i << " -> " << 0 << endl;
        else
            cout << i << " -> " << cifra << endl;
    }
    return 0;
}
