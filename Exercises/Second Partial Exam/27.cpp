/*
 Четиринасочник претставува матрица во која се испишани зборови хоризонотално и вертикално, одлево-надесно и оддесно-налево.
 Притоа секој елемент од матрицата претставува буква од англиската азбука.
 Пример скриени зборови: HAIR, OLE (прецртани), FISH, TOE (подвлечени)
 T H A I R E
 E S N K N E
 M I M J O L
 M F S P S T
 I F G E L O
 X U T Y O E
 Од стандарден влез се чита квадратна матрица од ред n (3 <= n <= 50), составена од знаци.
 Прво се чита бројот n - бројот на редици (колони) на матрицата, а потоа и самите елементи на матрицата (види пример).
 По читањето на матрицата, од стандарден влез се внесува збор составен од максимум 10 букви.
 Ваша задача е да определите дали тој збор се наоѓа во четиринасочникот (хоризонтално или вертикално, одлево-надесно или оддесно-налево).
 Потребно е да се испечати локацијата (ред, колона) на првата и последната буква од зборот.
 Доколку зборот повеќепати се наоѓа во четеринасочникот, треба да се испечати првото појавување,
 гледано елемент по елемент како што се чита матрицата.
 Доколку не се пронајде зборот, тогаш се печати Not Found.

 Input:
 4
 T H K I E E N K M A E J M I E P
 KNEE

 Result:
 0, 2 -> 3, 2
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    char zbor[11];
    cin >> zbor;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            for (int pom_h = -1; pom_h <= 1; pom_h++) {  // pom_h za horizontalno
                for (int pom_v = -1; pom_v <= 1; pom_v++) {  // pom_v za vertikalno
                    if (abs(pom_h) + abs(pom_v) != 1)
                        continue;
                    bool nasoka = true;
                    int length = strlen(zbor);
                    for (int k = 0; k < length; k++) {
                        char bukva1 = zbor[k];
                        int nov_red = i + pom_v * k;
                        int nova_kol = j + pom_h * k;
                        if (nov_red >= n || nova_kol >= n || nov_red < 0 || nova_kol < 0) {
                            nasoka = false;
                            break;
                        }
                        char bukva2 = a[nov_red][nova_kol];
                        if (bukva1 != bukva2) {
                            nasoka = false;
                            break;
                        }
                    }
                    if (nasoka) {
                        cout << i << ", " << j << " -> " <<
                             i + (length - 1) * pom_v << ", " << j + (length - 1) * pom_h;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Not Found";
    return 0;
}
