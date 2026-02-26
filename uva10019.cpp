#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, i;
    while (cin >> tc) {
        while (tc--) {
            cin >> i;
            int b1 = 0, b2 = 0;
            int X1 = i, x2;
            string X2 = to_string(i);

            while (X1 != 0) {
                if (X1 % 2 == 1) ++b1;
                X1 /= 2;
            }

            for (int j = 0; j < X2.size(); ++j) {
                x2 = X2[j] - '0';
                while (x2 != 0) {
                    if (x2 % 2 == 1) ++b2;
                    x2 /= 2;
                }
            }

            cout << b1 << ' ' << b2 << endl;
        }
    }
}
