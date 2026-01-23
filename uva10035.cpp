#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    long long a, b;
    while (cin >> a >> b && !(a == 0 && b == 0)) {
        int carry = 0;
        int cnt = 0;

        // operate
        while (a != 0 || b != 0) {
            if (a % 10 + b % 10 + carry > 9) {
                ++cnt;
                carry = 1;
            } else {
                carry = 0;
            }
            a /= 10;
            b /= 10;
        }

        // output result
        if (!cnt) {
            cout << "No carry operation.\n";
        } else if (cnt == 1) {
            cout << "1 carry operation.\n";
        } else {
            cout << cnt << " carry operations.\n";
        }
    }
}
