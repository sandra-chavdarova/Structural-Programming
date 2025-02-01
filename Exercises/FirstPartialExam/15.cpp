/*
 From SI are read N pairs of integers, where the first number is the students' points, and the second is the max. points.
 Write a program where for each pair (points, max points), will print the students success in percentage and his grade following these rules:
 - if the student has 90% or more - "10".
 - if the student has 80% or more - "9".
 - if the student has 70% or more - "8".
 - if the student has 60% or more - "7".
 - if the student has 50% or more - "6".
 - If the student has less than 50% print "FAIL".

 Input:
 3
 19 20
 27 40
 55 70

 Result:
 95 10
 67.5 7
 78.5714 8
*/

#include <iostream>

using namespace std;

int main() {
    float n, points, maxPoints;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> points >> maxPoints;
        float percentage = (points / maxPoints) * 100;
        cout << percentage << " ";
        if (percentage < 50)
            cout << "FAIL" << endl;
        else {
            if (percentage < 60)
                cout << 6 << endl;
            else if (percentage < 70)
                cout << 7 << endl;
            else if (percentage < 80)
                cout << 8 << endl;
            else if (percentage < 90)
                cout << 9 << endl;
            else if (percentage < 100)
                cout << 10 << endl;
        }
    }
    return 0;
}