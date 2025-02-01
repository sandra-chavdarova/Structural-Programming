/*
 Од стандарден влез се чита број N, а потоа низа на N цели броеви.
 Да се дефинира функција int isInteresting(int number) која што ќе врати 1 доколку е интересен број,
 односно доколку цифрите на бројот се парна-непарна цифра, наизменично. Во спротивно враќа 0.
 Да се дефинира функција void printArray(int numbers[], int n) која што ќе ги испринта сите броеви во низата кои што се интересни.
 Пример интересни броеви: 1634, 678, 141858
 За се освојат сите поени од вежбата, потребно е функцијата printArray да биде рекурзивна.

 Input:
 5
 123
 6789
 111
 5325
 325

 Result:
 325
 6789
 123
*/

#include <iostream>

using namespace std;

int isInteresting(int n) {
    bool flag;
    int cifra1 = n % 10;
    if (cifra1 % 2 == 1)
        flag = true;
    else
        flag = false;
    int i = n / 10;
    for (; i > 0; i /= 10) {
        int cifra2 = i % 10;
        if (flag) {
            if (cifra2 % 2 == 1) {
                break;
            }
        } else {
            if (cifra2 % 2 == 0) {
                break;
            }
        }
        flag = !flag;
    }
    if (i == 0)
        return 1;
    else
        return 0;
}

void printArray(int a[], int n) {
    if (n < 0) {
        return;
    } else {
        if (isInteresting(a[n])) {
            cout << a[n] << endl;
            return printArray(a, n - 1);
        } else
            return printArray(a, n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    printArray(a, n - 1);
    return 0;
}


/* За да ги принта во редослед како што се внесени:
void printArray(int a[], int n) {
    if (n < 0) {
        return;
    } else {
        if (isInteresting(a[n])) {
            printArray(a, n - 1);
            cout << a[n] << endl;
        }
        else
            return printArray(a, n - 1);
    }
}
*/