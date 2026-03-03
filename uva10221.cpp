#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    double s, a;
    string check;
    while (cin >> s >> a >> check) {
        if (check == "min") a /= 60.0;
        while (a > 360.0) a -= 360.0;
        if (a > 180.0) a = 360.0 - a;

        double rad = a * M_PI / 180.0;
        double r = s + 6440.0;
        cout << fixed << setprecision(6) << r*rad << ' ' << 2.0*r*sin(rad/2.0) << '\n';
    }
}
