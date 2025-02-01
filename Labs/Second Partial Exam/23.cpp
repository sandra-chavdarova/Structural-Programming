/*
 Да се напише рекурзивна функција преку која бројот ќе се трансформира
 на тој начин што секоја непарна цифра ќе се намали за 1, а парните цифри ќе бидат заменети со нула.
 Функцијата треба да го врати трансформираниот број.
 Да се напише и главна програма која ќе ја тестира работата на функцијата.

 Input:
 93854

 Result:
 Brojot e 82040
*/

#include <iostream>

using namespace std;

int transformacija(int n) {
    if (n == 0)
        return 0;
    else {
        int cifra = n % 10, broj;
        if (cifra % 2 == 0)
            broj = 0;
        else
            broj = cifra - 1;
        return transformacija(n / 10) * 10 + broj;
    }
}

int main() {
    int n;
    cin >> n;
    int rezultat = transformacija(n);
    cout << "Brojot e " << rezultat << endl;
    return 0;
}
