/*
 Да се напише програма која ќе прочита два природни броја.
 Програмата треба да провери дали цифрите на непарна позиција од првиот број се на парна позиција во вториот број.
 Ако овој услов е исполнет, програмата печати DA, во спротивно NE.
 Првата цифра се наоѓа на 0та позиција почнувајќи од лево.

 Input:
 1234567
 654321

 Result:
 DA
 */

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int brCifri1 = 0, brCifri2 = 0;
    for (int i = num1; i > 0; i /= 10)
        brCifri1++;
    for (int i = num2; i > 0; i /= 10)
        brCifri2++;
    if (brCifri1 % 2 != 0) {
        num1 /= 10;
    }
    if (brCifri2 % 2 == 0) {
        num2 /= 10;
    }
    int n1 = num1;
    int n2 = num2;
    while (n1 > 0) {
        int cifra1 = n1 % 10;
        n2 = num2;
        bool condition = false;
        while (n2 > 0) {
            int cifra2 = n2 % 10;
            if (cifra1 == cifra2) {
                condition = true;
                break;
            }
            n2 /= 100;
        }
        if (!condition) {
            cout << "NE";
            return 0;
        }
        n1 /= 100;
    }
    cout << "DA";
    return 0;
}
