/*
 1.	Од тастатура се внесуваат знаци, за крај се внесува EOF.
 Да се напише програма која ќе ги трансформира внесените знаци и ќе ги испечатина екран.
 Трансформацијата се изведува не следниот начин: секоја внесена буква од која е од последниот ред букви на тастатурата
 “zxcvbnm” се заменува со соодветната буква од редот над неа “asd..hj”
 (односно со онаа која на тастатурата се наоѓа непосредно лево над неа).
 При тоа, треба да се задржи големината на буквата (големите букви од последниот ред се заменуваат
 со соодветните големи букви од редот над нив), или ‘z’ се заменува со ‘a’, ‘Z’ се заменува со ‘A’, ‘x’ се заменува со ‘s’, ... ,
 ‘M’ се заменува со ‘J’. Останатите знаци се печатат неизменети.

 Input:
 zZ./90qwNm,. *^hj$=BN]x
 The volume of goods transported by roads
 through Macedonia increased by nearly 70 percent

 Result:
 aA./90qwHj,. *^hj$=GH]s
 The foluje of goods trahsported gy roads
 through Jadedohia ihdreased gy hearly 70 perdeht
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char a[7][7] = {{'a', 's', 'd', 'f', 'g', 'h', 'j'},
                    {'z', 'x', 'c', 'v', 'b', 'n', 'm'}};
    char string[1000];
    while (cin.getline(string, 1000)) {
        if (string[0] == '#')
            break;
        int n = strlen(string);
        for (int i = 0; i < n; i++) {
            if (isalpha(string[i])) {
                for (int j = 0; j < 7; j++) {
                    if (tolower(string[i]) == a[1][j]) {
                        if (islower(string[i]))
                            string[i] = a[0][j];
                        else
                            string[i] = toupper(a[0][j]);
                    }
                }
            }
        }
        cout << string << endl;
    }
    return 0;
}
