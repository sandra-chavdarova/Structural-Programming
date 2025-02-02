/*
 Од стандарден влез се внесуваат непознат број на реченици претставени преку текстуални низи (стрингови)
 секоја не подолга од 100 знаци и секоја во нов ред. Програмата треба да го најде стрингот кој содржи најмногу сврзници
 и да го испечати заедно со бројот на најдените сврзници. За сврзници се сметаат сите зборови составени од една, две или три букви.
 Зборовите во текстуалната низа се одделени со едно или повеќе прзани места и/или интерпункциски знак.
 Броењето на сврзници во дадена текстуална низа треба да се реализира во посебна функција.
 Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.
 Ако има повеќе реченици со ист максимален број на сврзници, се печати прво најдената.
 Објаснување на тест примерот:
 Бројот на сврзници по реченици е 2, 3, 4, 2, 4 и 7 соодветно.
 Најмногу сврзници има по последната реченица па се печати бројот 7 и содржината на таа реченица.

 Input:
 Svrznicite vo makedonskiot jazik se sluzbeni zborovi
 odnosno niv gi upotrebuvame za povrzuvanje oddelni zborovi
 vo ramkite na edna recenica ili poveḱe recenici vo edna slozena recenica.
 Pri povrzuvanjeto, svrznicite gi izrazuvaat odnosite megju zborovite
 ili megju recenicite, pa taka sprotiven odnos se iskazhuva so
 ama ili no, a usloven odnos so ako itn.

 Result:
 7: ama ili no, a usloven odnos so ako itn.
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int broenje(char *a) {
    int brojac = 0, n = strlen(a), bukvi = 0;
    for (int i = 0; i < n; i++) {
        if (isalpha(a[i]))
            bukvi++;
        if (ispunct(a[i]) || isspace(a[i])) {
            if (bukvi > 0 && bukvi <= 3)
                brojac++;
            bukvi = 0;
        }
    }
    return brojac;
}

int main() {
    int max = 100;
    char a[max + 1];
    int max_svrznici = 0;
    char red[max + 1];
    while (cin.getline(a, max)) {
        if (strcmp(a, "#") == 0)
            break;
        int svrznici = broenje(a);
        if (svrznici > max_svrznici) {
            max_svrznici = svrznici;
            strcpy(red, a);
        }
    }
    cout << max_svrznici << ": " << red << endl;
    return 0;
}
