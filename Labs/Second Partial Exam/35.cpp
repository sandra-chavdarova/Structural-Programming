/*
 Да се напише програма која за низа од N броеви ќе проверува дали парот кој се наоѓа еден до друг е прост број.
 НАПОМЕНА: низата е составена од цифри од 0 до 9

 Input:
 11
 1 7 4 0 2 1 8 1 1 3 7

 Result:
 brojot 17 e prost
 brojot 40 NE e prost
 brojot 21 NE e prost
 brojot 81 NE e prost
 brojot 13 e prost
 brojot 7 e prost
*/

#include <iostream>

using namespace std;

bool prost(int n) {
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i += 2) {
        int broj = a[i] * 10 + a[i + 1];
        if (prost(broj))
            cout << "brojot " << broj << " e prost" << endl;
        else
            cout << "brojot " << broj << " NE e prost" << endl;
    }

    if (n % 2) {
        if (prost(a[n - 1]))
            cout << "brojot " << a[n - 1] << " e prost" << endl;
        else
            cout << "brojot " << a[n - 1] << " NE e prost" << endl;
    }
    return 0;
}
