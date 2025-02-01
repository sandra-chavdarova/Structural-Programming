/*
 Од стандарден влез се читаат броевите N и k, потоа се внесуваат N елементи во низа.
 Ваша задача е да ја испечатите низата и да испечатите колку пати во низата се појавува k.

 Input:
 5 678
 12
 678
 11
 53
 325

 Result:
 12 678 11 53 325
 Brojot 678 vo nizata se naogja 1 pati.
*/

#include <iostream>

using namespace std;

int main() {
    int n, k, brojac = 0;
    cin >> n >> k;;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
        if (a[i] == k)
            brojac++;
    }
    cout << endl << "Brojot " << k << " vo nizata se naogja " << brojac << " pati." << endl;
    return 0;
}
