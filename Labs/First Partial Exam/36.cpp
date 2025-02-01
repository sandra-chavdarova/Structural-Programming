/*
 Од стандарден влез се внесува даден број X,  а потоа се внесуваат броеви додека не се внесе нешто различно од број.
 За секој од броевите да се провери дали неговиот број на цифри е еднаков со бројот на цифри на Х,
 и доколку условот е исполнет, да се испечати.

 Input:
 1234
 453
 3745
 123
 6
 6850
 a

 Result:
 3745
 6850
 */

#include <iostream>

using namespace std;

int main() {
    int x, cifriX = 0, a;
    cin >> x;
    for (int i = x; i > 0; i /= 10) {
        cifriX++;
    }
    while (cin >> a) {
        int brojac = 0;
        for (int i = a; i > 0; i /= 10) {
            brojac++;
        }
        if (brojac == cifriX)
            cout << a << endl;
    }
    return 0;
}
