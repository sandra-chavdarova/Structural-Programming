/*
 Од стандарден влез прво се читаат два знака z1 и z2, а потоа се читаат редови со низи од знаци
 се’ додека не се прочита знакот # (секој од редовите не е подолг од 80 знаци).
 Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред составени од знаците
 што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.
 Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2,
 знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.

 Input:
 0 9
 nfjskdz0nvjkfdmnlks9bvfkjmcdz,
 bfhjdskvfdkl0fvkdzddjmje k dmkldz kdfds!%mlacsd9
 0fbnrjkdn9
 fjkd0jdfkfmjndksfjd;sj sad;jm 9nfcjka
 #

 Result:
 nvjkfdmnlks
 fvkdzddjmje k dmkldz kdfds!%mlacsd
 fbnrjkdn
 jdfkfmjndksfjd;sj sad;jm
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int const max = 80;
    char string[max + 1];
    char z1, z2;
    cin >> z1 >> z2;
    cin.get();
    while (cin.getline(string, max)) {
        if (strcmp(string, "#") == 0)
            break;
        int start = -1, end = -1;
        int n = strlen(string);
        for (int i = 0; i < n; i++) {
            if (string[i] == z1)
                start = i;
            if (string[i] == z2)
                end = i;

        }
        for (int i = start + 1; i < end; i++) {
            cout << string[i];
        }
        cout << endl;
    }
    return 0;
}
