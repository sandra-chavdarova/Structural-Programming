/*
 Од стандарден влез се чита низa од букви, не подолга од 80 знаци (само букви, без празни места).
 На стандарден излез треба да се отпечатат назабените поднизи подолги од 6букви, секоја во посебен ред.
 Назабена подниза е подниза којашто е составена наизменично од мали и големи букви, односно големи и мали букви.
 Почеток на низата претставува првата промена мала-голема или голема-мала буква, а завршува со последната промена.

 Input:
 HMbVxJuDGIjJptkxVvqHcKuLsOepnWN

 Result:
 MbVxJuD
 qHcKuLsOe
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char a[81], b[81];
    cin.getline(a, 80);
    int n = strlen(a), k = 0;
    bool kraj = false;
    for (int i = 0; i < n - 1; i++) {
        if ((isupper(a[i]) && isupper(a[i + 1])) || (islower(a[i]) && islower(a[i + 1]))) {
            b[k] = a[i];
            b[k + 1] = '\0';
            k = 0;
            kraj = true;
        } else {
            b[k] = a[i];
            k++;
        }
        if (kraj) {
            kraj = false;
            if (strlen(b) > 6)
                cout << b << endl;
        }
    }
    return 0;
}
