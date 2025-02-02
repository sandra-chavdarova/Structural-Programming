/*
 Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи.
 Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата.
 Доколку нема таков елемент, функцијата враќа вредност 0.
 Напишете програма што ќе ја повика функцијата par за внесената низа a[]
 и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[].

 Пример 1:
 Влез
 12 // бројот N на елементи
 1 3 4 5 3 1 4 5 5 3 2 3 // елементи на низата
 Излез
 Najmaliot element koj se pojavuva paren broj pati e 1 // овде функцијата par враќа вредност 1, а се печати оваа порака

 Пример 2.
 Влез
 12 // бројот N на елементи
 7 3 4 5 3 8 4 5 5 3 2 6 // елементи на низата
 Излез
 Nitu eden element ne se pojavuva paren broj pati! // овде функцијата par враќа вредност 0, се печати оваа порака
*/

#include <iostream>

using namespace std;

int par(int a[], int n) {
    int indeks = -1, min = -1;
    for (int i = 0; i < n; i++) {
        int brojac = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i])
                brojac++;
        }
        if (brojac % 2 == 0 && (min == -1 || a[i] < min)) {
            min = a[i];
            indeks = i;
        }
    }
    if (indeks == -1)
        return -1;
    else {
        return min;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int rezultat = par(a, n);
    if (rezultat == -1)
        cout << "Nitu eden element ne se pojavuva paren broj pati!" << endl;
    else
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << rezultat << endl;
    return 0;
}
