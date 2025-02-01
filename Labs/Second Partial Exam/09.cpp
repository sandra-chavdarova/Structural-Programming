/*
 Од стандарден влез се внесува големината на еден фудбалски терен MxN.
 Потоа се внесува локацијата на играчот на тој терен (x_igrac, y_igrac),
 па се внесува локацијата на топката (x_topka, y_topka) и локацијата на голот (x1_gol, y1_gol) (x2_gol, y2_gol).
 Од кога ќе се внесат овие вредности треба да се испечати фудбалскиот терен,
 во фудбалскиот терен играчот е означен со карактер 'i', голот е означен со карактер ']' и топката е означена со 'o',
 се останато се означува со '-'. Ваша задача е најпрво да го испечатите на екран фудбалскиот терен според внесените вредности.
 Потоа од стандарден влез се внесуваат две вредности за поместувањето на топката за x координатата и поместувањето на топката за у координатата.
 По поместувањето на топката доколку се наоѓа во голот се печати GOAL,
 доколку се наоѓа надвор од фудбалскиот терен се печати OUT и доколку се наоѓа во теренот,
 но не е гол се печати новата позиција на топката и фудбалскиот терен со новата позиција на топката.
 Напомена: За репрезентација на фудбалскиот терен користете матрица.

 Input:
 5 6
 2 2
 2 3
 2 5 3 5
 0 2

 Result:
 - - - - - -
 - - - - - -
 - - i o - ]
 - - - - - ]
 - - - - - -
 GOAL!
*/

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][n];
    int x_igrac, y_igrac;
    cin >> x_igrac >> y_igrac;
    int x_topka, y_topka;
    cin >> x_topka >> y_topka;
    int x1_gol, y1_gol, x2_gol, y2_gol;
    cin >> x1_gol >> y1_gol >> x2_gol >> y2_gol;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == x_igrac && j == y_igrac)
                cout << "i ";
            else if (i == x_topka && j == y_topka)
                cout << "o ";
            else if ((i == x1_gol && j == y1_gol) || (i == x2_gol && j == y2_gol))
                cout << "] ";
            else
                cout << "- ";
        }
        cout << endl;
    }

    int x, y;
    cin >> x >> y;
    if ((x + x_topka == x1_gol && y + y_topka == y1_gol) || (x + x_topka == x2_gol && y + y_topka == y2_gol)) {
        cout << "GOAL!" << endl;
    } else if (x_topka + x > n - 1 || y_topka + y > m - 1 || x_topka + x < 0 || y_topka + y < 0) {
        cout << "OUT!" << endl;
    } else if (x_topka + x < n - 1 || y_topka + y < m - 1 || x_topka + x > 0 || y_topka + y > 0) {
        x_topka += x;
        y_topka += y;
        cout << "Novata pozicija na topkata e (" << x_topka << ", " << y_topka << ")" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == x_igrac && j == y_igrac)
                    cout << "i ";
                else if (i == x_topka && j == y_topka)
                    cout << "o ";
                else if ((i == x1_gol && j == y1_gol) || (i == x2_gol && j == y2_gol))
                    cout << "] ";
                else
                    cout << "- ";
            }
            cout << endl;
        }
    }
    return 0;
}
