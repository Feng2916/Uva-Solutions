#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    double x1, y1, x2, y2, x3, y3, x4, y4;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        if (x1 == x3 && y1 == y3) {
            swap(x1, x2); swap(y1, y2);
            swap(x3, x4); swap(y3, y4);
        }
        else if (x2 == x3 && y2 == y3) {
            swap(x3, x4); swap(y3, y4);
        }
        else if (x1 == x4 && y1 == y4) {
            swap(x1, x2); swap(y1, y2);
        }

        cout << fixed << setprecision(3) << x1+x3-x2 << ' ' << y1+y3-y2 << '\n';
    }
}
