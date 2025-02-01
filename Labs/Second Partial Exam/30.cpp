/*
 Од тастатура се вчитуваат броевите A и B. На екран да се испечатат сите броеви од интервалот [A,B]
 кои се палиндроми и се составени само од цифрите 0,1,2,3 и 4.
 Предлог за работа:
 Да се имплементира функција reverseNumber (int number) која ќе го пресмета обратниот број на определен број number.
 Да се имплементира функција isPalindrome (int number) која ќе врати 1 доколку бројот number е палиндром, а 0 во спротивно
 Да се имплементира функција containsDigits (int number) која ќе врати 1 доколку сите цифри во бројот се 0,1,2,3 или 4, а 0 во спротивно.
 Да се искористат функциите isPalindrome и containsDigits во main функцијата
 Дополнително: Направете ја функцијата containsDigits рекурзивна.

 Input:
 10 100

 Result:
 11
 22
 33
 44
*/

#include <iostream>

using namespace std;

int containsDigits(int n) {
    if (n == 0)
        return 1;
    else {
        int cifra = n % 10;
        if (cifra == 0 || cifra == 1 || cifra == 2 || cifra == 3 || cifra == 4)
            return containsDigits(n / 10);
        else
            return 0;
    }
}

int isPalindrome(int n, int obraten) {
    if (n == obraten)
        return 1;
    else
        return 0;
}

int reverseNumber(int n) {
    int obraten = 0;
    for (int i = n; i > 0; i /= 10) {
        obraten = obraten * 10 + i % 10;
    }
    return obraten;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (isPalindrome(i, reverseNumber(i)) && containsDigits(i))
            cout << i << endl;
    }
    return 0;
}