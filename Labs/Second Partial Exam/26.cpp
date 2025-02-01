/*
 Да се напише функција void sort (int x, int y, int z) која што ќе ги сортира во опаѓачки редослед трите броја,
 односно во x ќе биде сместен најголемиот број, а во z најмалиот.
 Да не се менува main функцијата (морав, беше во C).

 Input:
 1 2 3

 Result:
 3 2 1
*/

#include <iostream>

using namespace std;

void sort(int *a, int *b, int *c) {
    if (*b > *a) {
        int temp = *b;
        *b = *a;
        *a = temp;
    }
    if (*c > *a) {
        int temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*c > *b) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    sort(&a, &b, &c);

    printf("%d %d %d", a, b, c);

    return 0;
}
