/*
 Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).
 Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата) и бројот на валидни елементи во низата.
 Функцијата треба да врати сумата на сите елементи почнувајќи од дадениот индекс ind па се до крајот на низата.
 Ако индексот ind е поголем од Nфункцијата треба да врати 0.
 НАПОМЕНА: Задачата да се реши со помош на покажувачи (без користење на оператор [ ]).
 Пример
 влез:
 10
 2 4 6 8 1 3 9 12 33 44
 6
 излез:
 98
 98 = 9+12+33+44

 Input:
 6
 2 1 66 100 1 2
 5

 Result:
 2
*/

#include <iostream>

using namespace std;

int sum_pos(int *a, int n, int indeks) {
    int sum = 0;
    if (indeks > n)
        return 0;
    for (int i = indeks; i < n; i++) {
        sum += *(a + i);
    }
    return sum;
}

int main() {
    int n, indeks;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> *(a + i);
    }
    cin >> indeks;
    int rezultat = sum_pos(a, n, indeks);
    cout << rezultat << endl;
    delete[] a;
    return 0;
}
