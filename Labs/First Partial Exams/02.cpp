/*
 Да се напише програма која ќе ги изведува основните математички операции (+, -, *, /, %)
 врз два броја кои се читаат од стандарден влез.

 Input:
 24 5
 Result:
 a + b = 29
 a - b = 19
 a * b = 120
 a / b = 4
 a % b = 4
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "a + b" << " = " << a + b << endl;
    cout << "a - b" << " = " << a - b << endl;
    cout << "a * b" << " = " << a * b << endl;
    cout << "a / b" << " = " << a / b << endl;
    cout << "a % b" << " = " << a % b << endl;
    return 0;
}
