/*
 Од стандарден влез се чита низa од букви, не подолга од 80 знаци (само букви, без празни места).
 На стандарден излез треба да се отпечатат монотонитеподнизи подолги од 6букви, секоја во посебен ред.
 Монотона подниза е подниза којашто е составена или само од мали или само од големи букви.

 Input:
 HMGRTEEbVxJuDGIptkxlderVvqHcKuLsOepllenWN

 Result:
 HMGRTEE
 ptkxlder
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char a[81], b[81];
    cin.getline(a, 80);
    int n = strlen(a), k = 0;
    for (int i = 0; i < n; i++) {
        if (isupper(a[i])) {
            for (int j = i; j < n; j++) {
                if (islower(a[j])) {
                    b[k] = '\0';
                    k = 0;
                    break;
                }
                b[k] = a[j];
                k++;
                i = j;
            }
        } else {
            for (int j = i; j < n; j++) {
                if (isupper(a[j])) {
                    b[k] = '\0';
                    k = 0;
                    break;
                }
                b[k] = a[j];
                k++;
                i = j;
            }
        }
        if (strlen(b) > 6)
            cout << b << endl;
    }
    return 0;
}
