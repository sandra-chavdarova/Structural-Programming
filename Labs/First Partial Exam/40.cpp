/*
 Да се напише програма што ќе ја испечати сумата на квадратите на сите парни броеви во интервалот [A,B).
 А и B се внесуваат од тастатура.

 Input:
 1 5

 Result:
 The sum is: 20
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, zbir = 0;
    cin >> a >> b;
    for (int i = a; i < b; i++) {
        if (i % 2 == 0)
            zbir += i * i;
    }
    cout << "The sum is: " << zbir << endl;
    return 0;
}
