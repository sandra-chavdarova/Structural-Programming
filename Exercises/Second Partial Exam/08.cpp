/*
 Од стандарден влез се читаат непознат број на редови додека не се прочита 0.
 Да се најде најдолгиот ред во кој има барем 2 цифри.
 Потоа, на стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра
 (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот.
 Се претпоставува дека ниту еден ред не е подолг од 100 знаци.

 Input:
 aaa123aa222aa2aaa23aaaaa22 11112 222311111
 aaa123aa222aa2aaa23aaaaa22 11112 aaaaaaaa1
 aaa123aa222aa2aaa23aaaaa22 11112 2a23111a1
 aaa123aa222aa2aaa23aaaaa22 11112 222311aa1
 aaa123aa222aa2aaa23aaaaa22 11112 222311111
 aaa123aa222aa2aaa21aa11122 11112 aaaa11111
 1aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
 0

 Result:
 123aa222aa2aaa21aa11122 11112 aaaa11111
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int max = 100, longest = 0;
    char a[max + 1], najdolg[max + 1];
    while (cin.getline(a, max)) {
        if ('0' == a[0])
            break;
        int n = strlen(a), brojac = 0;
        for (int i = 0; i < n; i++) {
            if (isdigit(a[i]))
                brojac++;
        }
        if (brojac >= 2 && n >= longest) {
            longest = n;
            strncpy(najdolg, a, max);
        }
    }
    int start = -1, end = -1;
    for (int i = 0; i < longest; i++) {
        if (isdigit(najdolg[i])) {
            start = i;
            break;
        }
    }
    for (int i = longest - 1; i >= 0; i--) {
        if (isdigit(najdolg[i])) {
            end = i;
            break;
        }
    }
    for (int i = start; i <= end; i++) {
        cout << najdolg[i];
    }
    return 0;
}
