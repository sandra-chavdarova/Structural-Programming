/*
 Сакаме да ги истражиме цените на одредени производи во продавница и да видиме кои од нив се над просечната цена, а кои се под просечната цена.
 За да го постигнеме ова, влезот е
 N, бројот на производите, и потоа
 N производи, претставувајќи ја нивната цена. Вашата задача е да го пресметате просекот на сите производи,
 а потоа да ги замените оние кои се под просекот со вредност 0 и оние над просекот (или еднакви) со вредност 1.
 На излез испечатете ја просечната цена, како и трансформираната низата (види тест примери)

 Input 1:
 5
 100 150 200 250 300

 Result 1:
 Average price: 200
 0 0 1 1 1


 Input 2:
 7
 80 120 350 420 480 200 90

 Result 2:
 Average price: 248.571
 0 0 1 1 1 0 0
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double a[n];
    double zbir = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        zbir += a[i];
    }
    double prosek = zbir / (double) n;
    cout << "Average price: " << prosek << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] > prosek)
            a[i] = 1;
        else
            a[i] = 0;
        cout << a[i] << " ";
    }
    return 0;
}
