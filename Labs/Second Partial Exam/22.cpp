/*
 Од стандарден влез се чита број n, а потоа се читаат и n броеви.
 Потребно е на екран да се испечатат сите броеви кои што се строго растечки,
 односно секоја цифра е поголема од претходната (1589 е растечки, 1529 не е растечки).
 Проверката за тоа дали бројот е растечки да се реализира со посебна функција која ќе врати 1 ако е растечки и -1 ако не е растечки.
 Дополнително ако бројот е растечки за него треба да се повика функција која ќе ја пресмета сумата на цифрите од кои е составен.

 Дополнително: функцијата за пресметување на сума на цифри да биде рекурзивна
 Печатењето треба да е во следен формат: 1234 (suma:  10)

 Input:
 5
 257 391 423 789 269

 Result:
 257 (suma: 14)
 789 (suma: 24)
 269 (suma: 17)
*/

#include <iostream>

using namespace std;

int raste(int n) {
    bool flag = true;
    for (int i = n; i > 0; i /= 10) {
        int cifra1 = i % 10;
        int cifra2 = i / 10 % 10;
        if (cifra2 > cifra1) {
            flag = false;
            break;
        }
    }
    if (flag)
        return 1;
    else
        return -1;
}

int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n % 10 + sum(n / 10);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int rastecki = raste(a[i]);
        if (rastecki == 1) {
            int suma = sum(a[i]);
            cout << a[i] << " (suma: " << suma << ")" << endl;
        }
    }
    return 0;
}
