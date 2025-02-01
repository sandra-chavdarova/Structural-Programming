/*
 Напишете програма која чита два природни броја, почеток и крај, од стандардниот влез.
 Потоа програмата треба да ги пронајде и отпечати палиндромите во опсегот [почеток, крај].
 Палиндром се дефинира како број што останува ист и кога неговите цифри се во обратен редослед.
 Ваша задача е да ги најдете најмалите и најголемите палиндроми во дадениот опсег.

 Input:
 10 50

 Result:
 Smallest Palindromic Number: 11
 Largest Palindromic Number: 44
 */

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int min = b, max = a;
    for (int i = a; i <= b; i++) {
        int obraten = 0;
        for (int j = i; j > 0; j /= 10) {
            int cifra = j % 10;
            obraten = obraten * 10 + cifra;
        }
        if (obraten == i) {
            if (i < min)
                min = i;
            else if (i > max)
                max = i;
        }
    }
    cout << "Smallest Palindromic Number: " << min << endl;
    cout << "Largest Palindromic Number: " << max << endl;
    return 0;
}
