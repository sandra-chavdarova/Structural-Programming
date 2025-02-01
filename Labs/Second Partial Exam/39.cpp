/*
 Напишете програма со која ќе ја пронајдете поднизата со најголем збир на елементите и испечатете го тој збир.
 Дополнително, пронајдете го и испечатете го процентот на елементи што се користат во поднизата во споредба
 со вкупниот број на елементи на низата.

 Input:
 10
 -2 1 -3 4 -1 2 1 -5 4 2

 Result:
 Maximum Sum: 7
 Percentage of Elements Used: 70
*/

#include <iostream>

using namespace std;

int main() {
    int n, a, brojac = 0, maxBrojac, rezultat = 0, maxRezultat = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        brojac++;
        rezultat += a;
        if (rezultat > maxRezultat) {
            maxRezultat = rezultat;
            maxBrojac = brojac;
        }
        if (rezultat < 0) {
            rezultat = 0;
            brojac = 0;
        }
    }
    float procent = (float) maxBrojac / (float) n * 100;
    cout << "Maximum Sum: " << maxRezultat << endl;
    cout << "Percentage of Elements Used: " << procent << endl;
    return 0;
}
