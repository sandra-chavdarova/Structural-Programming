/*
 Да се прочита број N од тастатура. Да се дефинира функција form(int n)
 што ќе испечати форма од ѕвезди како што е прикажано на сликата.
 За да се освојат сите поени од вежбата, потребно е функцијата form да биде рекурзивна.

 Input:
 5

 Result:
 *****
 ****
 ***
 **
 *
*/

#include <iostream>

using namespace std;

void form(int n, int m) {
    if (n == 1) {
        cout << "*" << endl;
        return;
    }
    if (m == 1) {
        cout << "*" << endl;
        return form(n - 1, n - 1);
    } else {
        cout << "*";
        return form(n, m - 1);
    }
}

int main() {
    int n;
    cin >> n;
    form(n, n);
    return 0;
}
