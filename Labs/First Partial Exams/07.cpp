/*
 Да се напише програма со која се внесува трицифрен број.
 Ако внесениот број е трицифрен треба да се одреди цифрата на единици, десетки и стотки.
 Исто така треба да се провери и дали цифрата на единици е парен или непарен број,
 доколку е парен број променливата ediniciParenBroj треба да има вредност true, во спротивно треба да има вредност false.
 Ако внесениот број не е трицифрен, треба да се испечати соодветна порака дека не станува збор за трицифрен број.
 Напомена: бројот 0 се смета за парен број.
 Појаснување: За бројот 367, цифрата на единици е 7, на десетки е 6, а на стотки е 3.
 Вредноста на променливата ediniciParenBroj треба да биде false.

 Input:
 572

 Result:
 Vrednosta na stotki, desetki i edinici e: 5,7,2
 Vredonsta na promenlivata ediniciParenBroj e 1
 */

#include <iostream>

using namespace std;

int main() {
    int a, edinici, desetki, stotki;
    bool ediniciParenBroj = true;
    cin >> a;
    edinici = a % 10;
    desetki = a / 10 % 10;
    stotki = a / 100;
    if (edinici % 2)
        ediniciParenBroj = false;
    cout << "Vrednosta na stotki, desetki i edinici e: " << stotki << "," << desetki << "," << edinici << endl;
    cout << "Vredonsta na promenlivata ediniciParenBroj e " << ediniciParenBroj << endl;
    return 0;
}
