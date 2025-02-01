/*
 Од стандарден влез се вчитува даден број n, а потоа се вчитуваат n трицифрени броеви.
 Ваша задача е да го најдете најголемиот број чиј збир на неговите цифри треба да е парен број.

 Input:
 4
 999
 122
 900
 170

 Result:
 170
 */

#include <iostream>

using namespace std;

int main() {
    int n, najgolem = 0, broj;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, zbir = 0;
        cin >> a;
        for (int j = a; j > 0; j /= 10)
            zbir += j % 10;
        if (zbir % 2 == 0 && zbir > najgolem) {
            najgolem = zbir;
            broj = a;
        }
    }
    cout << broj << endl;
    return 0;
}
