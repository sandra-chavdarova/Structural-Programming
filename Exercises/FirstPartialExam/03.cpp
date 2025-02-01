/*
 Од стандарден влез се чита еден природен број n.
 Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
 Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.

 Input:
 10

 Result:
 8
*/

#include <iostream>

using namespace std;

int main() {
    int n, najgolem = 0, broj = 0;
    cin >> n;
    n = n - 1;
    while (n > 0) {
        int zbir = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0)
                zbir += i;
        }
        if (zbir > najgolem) {
            najgolem = zbir;
            broj = n;
        }
        n--;
    }
    cout << broj << endl;
    return 0;
}