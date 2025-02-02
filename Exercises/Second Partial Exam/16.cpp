/*
 Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.
 Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број.
 За секој од нив да се испечати максималната цифра во посебен ред.
 Забелешка: Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.
 Забелешка: ЗАБРАНЕТО е користење на глобални променливи.

 Input:
 1221
 12332
 142727
 909
 281788
 29901
 6666
 x

 Result:
 2
 3
 7
 9
 8
 9
 6
*/

#include <iostream>

using namespace std;

int maksimalna_cifra(int n, int max) {
    if (n == 0)
        return max;
    else {
        int cifra = n % 10;
        if (cifra > max)
            max = cifra;
        return maksimalna_cifra(n / 10, max);
    }
}

int main() {
    int n = 0, a[100];
    while (cin >> a[n]) {
        n++;
    }
    for (int i = 0; i < n; i++) {
        int cifra = maksimalna_cifra(a[i] / 10, a[i] % 10);
        cout << cifra << endl;
    }
    return 0;
}
