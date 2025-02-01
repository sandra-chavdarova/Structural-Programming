/*
 Од стандарден влез се внесуваат број на елементи на низа и самата низа.
 Ваша задача е да најдете најголем и најмал елемент на низата,
 како и да ја трансформирате низата така што секој елемент ќе се зголеми за разликата помеѓу најголемиот и најмалиот елемент
 и на крајот да ги испечатите најголемиот, најмалиот елемент и трансформираната низата.

 Input:
 5
 2 4 5 1 3

 Result:
 MAX -> 5
 MIN -> 1
 6 8 9 5 7
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min = a[0], max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    cout << "MAX -> " << max << endl;
    cout << "MIN -> " << min << endl;
    int razlika = max - min;
    for (int i = 0; i < n; i++) {
        cout << razlika + a[i] << " ";
    }
    return 0;
}
