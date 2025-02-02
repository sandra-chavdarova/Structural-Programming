/*
 Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци.
 Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.
 Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром
 (се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак.
 Ако нема такви низи, се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов,
 се печати првата низа којашто го задоволува условот.

 Input:
 9
 a!bcdedcb!a
 Kfd?vsvv98_89vvsv?dfK
 Ccsvsdvdfv
 342425vbbcb
 352!2353696969625
 gdg??dfg!!
 5336346644747
 8338736767867
 12344321

 Result:
 Kfd?vsvv98_89vvsv?dfK
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

bool palindrom_check(char *string) {
    int length = strlen(string);
    for (int i = 0, j = length - 1; i < length / 2; i++, j--) {
        if (string[i] != string[j])
            return false;
    }
    return true;
}

int main() {
    int const max = 80;
    char string[max + 1], najdolg[max + 1];
    int n, max_length = 0;
    bool ima = false;
    cin >> n;
    cin.ignore();
    for (int brojac = 0; brojac < n; brojac++) {
        cin.getline(string, max);
        int length = strlen(string);
        bool punct = false;
        for (int i = 0; i < length; i++) {
            if (ispunct(string[i])) {
                punct = true;
                break;
            }
        }
        if (punct) {
            if (palindrom_check(string)) {
                if (length > max_length) {
                    max_length = length;
                    strcpy(najdolg, string);
                    ima = true;
                }
            }
        }
    }
    if (ima)
        cout << najdolg << endl;
    else
        cout << "Nema!" << endl;
    return 0;
}