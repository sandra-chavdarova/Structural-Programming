/*
 Да се напише програма во која што се внесува еден четирицифрен и еден трицифрен број.
 Да се отпечати 1 доколку сумата на цифрите на првиот број е поголема од сумата на цифрите на вториот број, во спротивно 0.

 Input:
 3421 598

 Result:
 0
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, zbir1 = 0, zbir2 = 0;
    cin >> a >> b;
    for (int i = a; i > 0; i /= 10) {
        zbir1 += i % 10;
    }
    for (int i = b; i > 0; i /= 10) {
        zbir2 += i % 10;
    }
    if (zbir1 > zbir2)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
