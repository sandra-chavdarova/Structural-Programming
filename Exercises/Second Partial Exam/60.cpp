/*
 N positive integers are entered from the standard input and are stored in an array (N <100).
 All elements that meet the next criteria should be presented on the standard output in the same order
 that they have appeared on the standard input.
 The criteria are following: the most important digit (the digit on the first place) is odd and the least important digit is even.
 If, no such number was entered, you should print out "No such elements!" message.
 The implementation of checking the criteria should be performed in a separate function (recursive function for additional 5 points).

 Input:
 10
 12345
 2345
 345678
 2912301
 3212342
 9129321
 77777
 213312
 32322
 313138

 Result:
 345678
 3212342
 32322
 313138
*/

#include <iostream>

using namespace std;

/*
    bool criteria(int num) {
    if (num == 0) {
        return false;  // Base case: no digits left
    }

    int lastDigit = num % 10;
    int firstDigit = 0;

    while (num > 0) {
        firstDigit = num % 10;
        num /= 10;
    }

    // Check if the first digit is odd and the last digit is even
    if (firstDigit % 2 == 1 && lastDigit % 2 == 0) {
        return true;
    }

    // Recursively check the criteria for the remaining digits
    return criteria(num);
}
*/

bool criteria(int a) {
    if (a < 10 && a % 2)
        return true;
    else if (a < 10 && a % 2 == 0)
        return false;
    else {
        return criteria(a / 10);
    }
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int brojac = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && criteria(a[i]))
            brojac++;
    }
    if (brojac) {
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0 && criteria(a[i]))
                cout << a[i] << endl;
        }
    } else
        cout << "No such elements!" << endl;
    return 0;
}
