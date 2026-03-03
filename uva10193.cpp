#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) { return (!b)? a: gcd(b, a%b); }

int dec (string s) {
    int res = 0;
    for (int i = 0; i < s.size(); ++i) res = (res << 1) + (s[i] - '0');
    return res;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        string S1, S2;
        cin >> S1 >> S2;

        int s1 = dec(S1), s2 = dec(S2);

        if (gcd(s1, s2) != 1) cout << "Pair #" << i << ": All you need is love!\n";
        else cout << "Pair #" << i << ": Love is not all you need!\n";
    }
}
