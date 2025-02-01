/*
 Да се напише програма во која со помошна функција што користи покажувачи,
 елементите на низата ќе се променат така што секој елемент ќе биде еднаков
 на збирот од него самиот и неговиот претходник кој е изменет според истата логика.

 Input:
 5
 1 2 3 4 5

 Result:
 Vnesenata niza e:
 1 2 3 4 5
 Novata niza e:
 1 3 6 10 15
*/

#include <iostream>

using namespace std;

void transformacija(int *a, int n) {
    for (int i = 1; i < n; i++) {
        *(a + i) += *(a + i - 1);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Vnesenata niza e:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    transformacija(a, n);
    cout << endl << "Novata niza e:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
