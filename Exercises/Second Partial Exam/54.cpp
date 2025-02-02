/*
 Read an integer k from SI, followed by lines of characters. Print on SO the read lines transformed in such a way
 that all the vowels in the line will be repeated k times.

 Input:
 3
 Do you ever wish you knew exactly what your dog is thinking? A team of designers from the Nordic Society for Invention and Discovery is playing Doctor Dolittle -- they've developed a doggie headset that can read animal brainwaves and translate them into human speech. That's just one of the many amazing scientific breakthroughs we've witnessed this week.

 Result:
 Dooo yooouuu eeeveeer wiiish yooouuu kneeew eeexaaactly whaaat yooouuur dooog iiis thiiinkiiing? AAA teeeaaam ooof deeesiiigneeers frooom theee Nooordiiic Sooociiieeety fooor IIInveeentiiiooon aaand Diiiscoooveeery iiis plaaayiiing Doooctooor Doooliiittleee -- theeey'veee deeeveeelooopeeed aaa doooggiiieee heeeaaadseeet thaaat caaan reeeaaad aaaniiimaaal braaaiiinwaaaveees aaand traaanslaaateee theeem iiintooo huuumaaan speeeeeech. Thaaat's juuust oooneee ooof theee maaany aaamaaaziiing sciiieeentiiifiiic breeeaaakthrooouuughs weee'veee wiiitneeesseeed thiiis weeeeeek.
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

bool samoglaska(char a) {
    char bukva = tolower(a);
    return (bukva == 'a' || bukva == 'e' || bukva == 'i' || bukva == 'o' || bukva == 'u');
}

int main() {
    int max = 100000, k;
    cin >> k;
    char line[max + 1];
    cin.get();
    cin.getline(line, max);
    int n = strlen(line);
    for (int i = 0; i < n; i++) {
        if (samoglaska(line[i]))
            for (int j = 1; j < k; j++)
                cout << line[i];
        cout << line[i];
    }
    return 0;
}
