/*
 Read words from SI. No words are longer than 20 characters.
 Write a program that on the SO will print all the words from the file that are unsigned hexadecimal numbers
 (one word per line in uppercase digits). At the end also print the total number of such numbers found in the file.
 The hexadecimal numbers can contain both upper and lowercase letters a-f and A-F, but when printing them convert them all to uppercase.
 The possible leading zeroes are also treated as part of the number and should also be printed.
 Since the numbers are unsigned whole numbers no sign or decimal point is considered as part of the number.

 Input:
 The_sum_is
 64
 and_the_minimum_is
 def
 ined_as
 a
 035
 where_signs_like
 +12AB
 are_not_considered
 as_well_as
 decimal_point_like
 12.f5a
 also_not
 this1
 or
 2one

 Result:
 64
 DEF
 A
 035
 Total: 4
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

bool hexadecimal(char a) {
    return (isdigit(a) || (a >= 'A' && a <= 'F'));
}

int main() {
    int max = 100, vkupno = 0;
    char line[max + 1];
    while (cin.getline(line, max)) {
        if (line[0] == '#')
            break;
        if (line[0] == '\0')
            continue;
        int n = strlen(line), j = 0;
        bool flag = true;
        char num[max + 1];
        for (int i = 0; i < n; i++) {
            if (!hexadecimal(toupper(line[i]))) {
                flag = false;
                break;
            } else {
                num[j] = toupper(line[i]);
                j++;
            }
        }
        if (flag) {
            num[j] = '\0';
            vkupno++;
            cout << num << endl;
        }
    }
    cout << "Total: " << vkupno << endl;
    return 0;
}
