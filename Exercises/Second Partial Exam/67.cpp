/*
 Write a program that will read lines from SI, and it will print on the SO the lines
 preceded by the ratio of upper/lower case letters in the rows.
 Also, at the end print the number of the line with the largest ration of upper/lower case letters.

 Input:
 So, so you think you can tell Heaven from Hell,
 blue skies From Pain.
 Can you tell a Green Field From a cold steel rail?
 A smile from a veil?
 Do you think you can tell?
 And did they geT you to Trade Your heroes for ghosts?
 Hot ashes for trees?

 Result:
 0.09 So, so you think you can tell Heaven from Hell,
 0.13 blue skies From Pain.
 0.11 Can you tell a Green Field From a cold steel rail?
 0.07 A smile from a veil?
 0.05 Do you think you can tell?
 0.11 And did they geT you to Trade Your heroes for ghosts?
 0.07 Hot ashes for trees?
 1
*/

#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>

using namespace std;

int main() {
    int max = 100;
    char a[max + 1];
    float ratio[100];
    int n = 0;
    while (cin.getline(a, max)) {
        if ('#' == a[0])
            break;
        float lower = 0, upper = 0;
        int l = strlen(a);
        for (int i = 0; i < l; i++) {
            if (islower(a[i]))
                lower++;
            if (isupper(a[i]))
                upper++;
        }
        float prosek = upper / lower;
        cout << fixed << setprecision(2) << prosek << " " << a << endl;
        ratio[n] = prosek;
        n++;
    }
    float largest = ratio[0];
    int index = 0;
    for (int i = 1; i < n; i++) {
        if (ratio[i] > largest) {
            largest = ratio[i];
            index = i;
        }
    }
    cout << index << endl;
    return 0;
}
