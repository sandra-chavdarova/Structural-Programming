/*
 Да се напише програма во C++ која прима три цели едноцифрени броеви од стандардниот влез, каде (a,b,c > 0 && a,b,c < 10).
 Вашата задача е да ги комбинирате овие броеви за да генерирате еден нов троцифрен број.
 Напомена: Комбинирањето на броевите да се изврши математички.
 Дополнително, потребно е во нов ред да се испeчати разликата на секој од внесените броеви и генерираниот број.

 Input:
 1 2 3

 Result:
 123
 122 121 120
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int broj = a * 100 + b * 10 + c;
    int razlika1 = broj - a, razlika2 = broj - b, razlika3 = broj - c;
    cout << broj << endl << razlika1 << " " << razlika2 << " " << razlika3 << endl;
    return 0;
}
