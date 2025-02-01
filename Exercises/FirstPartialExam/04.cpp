/*
 Од стандарден влез се читаат знаци се додека не се прочита извичник.
 Во вака внесениот текст се скриени цели броеви (помали од 100).
 Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.

 Напомена: cin во C++ ги игнорира празните места (space).
 За да не ги игнорира потребно е да се додаде noskipws пред читањето на знакот (пр. cin >> noskipws >> znak;)

 Input:
 ako34D neka12em bashka41mewr20!

 Result:
 107
*/

#include <iostream>

using namespace std;

int main() {
    char a;
    int zbir = 0;
    while (true) {
        cin >> noskipws >> a;
        if (a == '!')
            break;
        if (a >= '0' && a <= '9') {
            char temp;
            cin >> noskipws >> temp;
            if (temp == '!') {
                zbir += a - '0';
                break;
            }
            if (temp >= '0' && temp <= '9') {
                zbir += (a - '0') * 10 + (temp - '0');
            } else
                zbir += a - '0';
        }
    }
    cout << zbir << endl;
    return 0;
}