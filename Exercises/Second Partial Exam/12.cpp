/*
 Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа.
 Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа.
 Функцијата е зададена со следниот прототип:
 int BrojPozitivni(int niza[], int n);
 Да се напише и функција main() за тестирање на функцијата BrojPozitivni.

 Input:
 2
 -2 5

 Result:
 1
*/

#include <iostream>

using namespace std;

int BrojPozitivni(int a[], int n) {
    if (n < 0)
        return 0;
    else {
        if (a[n] > 0)
            return 1 + BrojPozitivni(a, n - 1);
        return BrojPozitivni(a, n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int rezultat = BrojPozitivni(a, n - 1);
    cout << rezultat << endl;
    return 0;
}
