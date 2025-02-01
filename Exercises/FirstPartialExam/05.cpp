/*
 Од тастатура се читаат 2 позитивни цели броеви.
 Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
 Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
 Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед.
 Соодветно да се испечатат пораки „PAREN“ и „NE“.
 Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1).

 Input:
 12345678 1357

 Result:
 PAREN
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long a, b, broj = 0, brojac = 0;
    cin >> a >> b;
    if (a <= 0 || b <= 0)
        cout << "Invalid input" << endl;
    else {
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        while (a > 0) {
            int cifra = a / 10 % 10;
            if (broj != 0)
                broj = cifra * pow(10, brojac) + broj;
            else
                broj = cifra;

            a /= 100;
            brojac++;
        }

        if (broj == b)
            cout << "PAREN" << endl;
        else
            cout << "NE" << endl;
    }
    return 0;
}
