/*
Напишете C++ програма со која ќе пресметате просек на оцените на даден студент.
На влез се вчитуваат пет цели броеви претставувајќи ги оцените на студентот во еден семестар.
Напомена: просекот да се претстави како float.

Input:
7 8 7 9 8
Result:
Average grade: 7.8
*/

#include <iostream>

using namespace std;

int main() {
    int ocena1, ocena2, ocena3, ocena4, ocena5;
    cin >> ocena1 >> ocena2 >> ocena3 >> ocena4 >> ocena5;
    float prosek = (float) (ocena1 + ocena2 + ocena3 + ocena4 + ocena5) / 5;
    cout << "Average grade: " << prosek << endl;
    return 0;
}
