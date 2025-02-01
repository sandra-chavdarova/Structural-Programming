/*
 Да се дефинираат функциите:
    •	divisibleByK (int number, int k) - која ќе враќа 1 доколку бројот k е делител на бројот number, a 0 во спротивно.
    •	nextDivisibleByK (int number, int k) - која ќе го врати првиот број поголем од number кој е делив со k.
        Да се употреби повик до divisibleByK во ова функција.
 Да не се менува main функцијата!
 Објаснување на примерот: Во секоја линија лево од стрелката се печати секој број од интервалот од [10,20], а десно од стрелката се печати наредниот број поголем од бројот лево којшто е делив со бројот k.
 Бонус: Направете ја функцијата nextDivisibleByK рекурзивна.

 Input:
 10 20 7

 Result:
 10 -> 14
 11 -> 14
 12 -> 14
 13 -> 14
 14 -> 21
 15 -> 21
 16 -> 21
 17 -> 21
 18 -> 21
 19 -> 21
 20 -> 21
*/

#include <iostream>

using namespace std;

int divisibleByK(int n, int k) {
    if (n % k == 0)
        return 1;
    else
        return 0;
}

int nextDivisibleByK(int n, int k) {
    if (divisibleByK(n, k)) {
        return n;
    } else
        return nextDivisibleByK(n + 1, k);
}

int main() {

    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);

    for (int i = a; i <= b; i++) {
        printf("%d -> %d\n", i, nextDivisibleByK(i + 1, k));
    }

    return 0;
}
