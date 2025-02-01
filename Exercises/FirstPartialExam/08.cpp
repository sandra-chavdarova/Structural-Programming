/*
 Од стандарден влез се внесуваат два цели броја N и Х.
 Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
 Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
 Задачата да се реши без употреба на низи и матрици.

 Input:
 88 7

 Result:
 86
*/

#include <iostream>

using namespace std;

int main() {
    int n, x, broj;
    bool razlicen = 1;
    cin >> n >> x;

    for (int i = n - 1; i >= 0; i--) {
        razlicen = 1;
        for (int j = x; j > 0; j /= 10) {
            broj = i;
            int cifra = j % 10;
            while (broj > 0) {
                int cifraBroj = broj % 10;
                if (cifraBroj == cifra) {
                    razlicen = 0;
                    break;
                }
                broj /= 10;
            }
        }
        if (razlicen == 1) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
