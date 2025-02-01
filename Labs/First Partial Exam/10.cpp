/*
 Да се напише програма со која корисникот внесува два цели броја, а програмата ќе изврши замена на броевите,
 односно првиот број ќе ја земе вредноста на вториот, а вториот ќе ја земе вредноста на првиот.
 Притоа да се испечати разликата на броевите пред и после направената замена.
 Упатство: за да направите замена на броевите користете привремена променлива.

 Input:
 32
 5

 Result:
 Vrednosta na broj1 i broj2 pred zamena na broevite e: 32,5 a razlikata: 27
 Vrednosta na broj1 i broj2 posle zamena na broevite e: 5,32 a razlikata: -27
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, razlika;
    cin >> a >> b;
    razlika = a - b;
    cout << "Vrednosta na broj1 i broj2 pred zamena na broevite e: " << a << "," << b << " a razlikata: " << razlika << endl;
    int temp = a;
    a = b;
    b = temp;
    razlika = a - b;
    cout << "Vrednosta na broj1 i broj2 posle zamena na broevite e: " << a << "," << b << " a razlikata: " << razlika << endl;
    return 0;
}
