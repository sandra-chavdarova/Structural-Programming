/*
 Од тастатура се читаат два цели броеви a, b.
 Да се испечатат сите парни броеви кои што се деливи со 7 и сите непарни броеви кои што не се деливи со 3 во опсег (а, b].
 Ако вакви броеви не постојат да се испечати 0, а во спротивно да се испечати колкав процент од броевите
 ги исполнуваат условите (односно ќе бидат испечатени).

 Input:
 1 7

 Result:
 5
 7
 33.3333%
 */

#include <iostream>

using namespace std;

int main() {
    int a, b;
    float brojac = 0, ispecateni = 0;
    cin >> a >> b;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a + 1; i <= b; i++) {
        if (i % 2 == 0 && i % 7 == 0) {
            cout << i << endl;
            ispecateni++;
        }
        if (i % 2 == 1 && i % 3 != 0) {
            cout << i << endl;
            ispecateni++;
        }
        brojac++;
    }
    if (ispecateni == 0)
        cout << 0 << endl;
    else {
        float procent = (ispecateni / brojac) * 100;
        cout << procent << "%" << endl;
    }
    return 0;
}
