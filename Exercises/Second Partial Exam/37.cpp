/*
 Од тастатура се внесуваат еден цел позитивен број N и цифра D.
 Да се напише програма која ќе го испечати првиот број поголем од N во кој не се појавува цифрата D.

 Input:
 123456
 4

 Result:
 123500
*/

#include <iostream>

using namespace std;

bool proverka(int n, int d) {
    if (n == 0)
        return true;
    else {
        if (n % 10 == d)
            return false;
        else
            return proverka(n / 10, d);
    }
}

int main() {
    int n, d;
    cin >> n >> d;
    for (int i = n + 1; true; i++) {
        if (proverka(i, d)) {
            cout << i << endl;
            return 0;
        }
    }
}
