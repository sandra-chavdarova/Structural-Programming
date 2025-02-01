/*
 From SI read one number that represents the today's date in format DDMMYYYY (DD-day, MM-month, YYYY-year).
 Then read one integer N, after you read N dates of birth in the given format.
 For each of the N read dates your program should print "YES" if on today's date (read in the beginning)
 the person with that date have more or equal to 18 years, otherwise should print "NO".

 Input:
 15032015
 12
 12121992
 16031997
 12121980
 12041997
 01011999
 23121976
 28071955
 16091985
 19950817
 04061983
 16111981
 25021951

 Result:
 YES
 NO
 YES
 NO
 NO
 YES
 YES
 YES
 YES
 YES
 YES
 YES
*/

#include <iostream>

using namespace std;

int main() {
    int denesenDatum;
    cin >> denesenDatum;
    int denesnaGodina = denesenDatum % 10000;
    int denesenMesec = denesenDatum / 10000 % 100;
    int denesenDen = denesenDatum / 1000000;
    int n, datum;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> datum;
        int godina = datum % 10000;
        int mesec = datum / 10000 % 100;
        int den = datum / 1000000;
        if (denesnaGodina - godina > 18)
            cout << "YES" << endl;
        else if (denesnaGodina - godina < 18)
            cout << "NO" << endl;
        else if (denesnaGodina - godina == 18) {
            if (denesenMesec - mesec < 0) {
                cout << "NO" << endl;
            } else if (denesenMesec - mesec > 0)
                cout << "YES" << endl;
            else if (denesenMesec - mesec == 0) {
                if (denesenDen - den < 0)
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
        }
    }
    return 0;
}