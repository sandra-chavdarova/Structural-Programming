/*
 Three natural numbers А, B and C are entered from the SI.
 Write a program that will check if the three entered numbers can represent the values of the angles (in degrees) of a triangle. If the values can represent angles of a triangle print YES in the first line of the standard output followed by type of the triangle (RIGHT, ACUTE or OBTUSE) in the next line. If triangle is not possible with the tree given angles print NO in a single line.
 Examples:

 Example 1:
 60 40 80
 YES
 ACUTE

 Example 2:
 100 50 30
 YES
 OBTUSE

 Example 3:
 100 50 50
 NO


 Input:
 100 50 30

 Result:
 YES
 OBTUSE
*/

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b + c != 180)
        cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        if (b >= c) {
            int temp = b;
            b = c;
            c = temp;
        }
        if (a >= c) {
            int temp = a;
            a = c;
            c = temp;
        }
        if (a >= b) {
            int temp = b;
            b = a;
            a = temp;
        }

        if (c == 90)
            cout << "RIGHT" << endl;
        else if (c < 90)
            cout << "ACUTE" << endl;
        else
            cout << "OBTUSE" << endl;
    }
    return 0;
}
