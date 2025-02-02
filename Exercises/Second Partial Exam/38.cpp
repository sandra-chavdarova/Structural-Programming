/*
 Од тастатура се внесува цел број N. Да се напише програма која ќе го испечати првиот број поголем
 од N во кој цифрите се во растечки (опаѓачки) редослед.

 Input:
 1321

 Result:
 3210
*/

#include <iostream>

using namespace std;

bool proverka(int n) {
    if (n < 10)
        return true;
    else {
        int c1 = n % 10, c2 = n / 10 % 10;
        if (c1 < c2)
            return proverka(n / 10);
        else
            return false;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = n + 1; true; i++) {
        if (proverka(i)) {
            cout << i << endl;
            return 0;
        }
    }
}
