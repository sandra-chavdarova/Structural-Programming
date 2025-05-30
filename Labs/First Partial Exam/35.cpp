/*
 Виктор е студент на ФИНКИ кој моментално размислува како да си го испланира семестарот за евентуално да добие стипендија.
 Виктор добро се знае себеси и има истражувано за предметите,
 при што тој може да си ги претпостави своите оценки по потенцијалните предмети што би ги земал.
 Тој сака да си го испланира семестарот така што би го имал најголемиот просек можно по неговото завршување.
 На стандарден влез се внесуваат 6 оценки за предметите. Првите 5 оценки се за задолжителни предмети кои мора да ги запише.
 Следниот предмет е изборен дополнителен предмет, кој не е задолжителен да го запише.
 Тој целокупно мора да има 5 или 6 предмети во семестар. Тој ќе ја избере опцијата со највисок просек.
 На стандарден излез да се испечати колку предмети се запишуваат и во нов ред да се испечати 1 доколку Виктор добива стипендија,
 во спротивно 0. Виктор добива стипендија доколку запишува 6 предмети и просекот му е 8.5 или над.

 Input:
 6 7 5 9 7
 7

 Result:
 Enrolled 6 subjects
 0
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    double suma1 = a + b + c + d + e;
    double suma2 = a + b + c + d + e + f;
    double prosek1, prosek2;
    prosek1 = suma1 / 5.0;
    prosek2 = suma2 / 6.0;
    if (prosek2 > prosek1) {
        cout << "Enrolled 6 subjects" << endl;
        if (prosek2 >= 8.5)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    } else {
        cout << "Enrolled 5 subjects" << endl;
        cout << 0 << endl;
    }
    return 0;
}
