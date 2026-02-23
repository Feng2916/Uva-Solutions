#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {
        long long s, d;
        cin >> s >> d;
        long long a=(s+d)/2, b=(s-d)/2;
        if (a < 0 or b < 0 or (s+d)%2 or (s-d)%2) cout << "impossible\n";
        else cout << max(a, b) << ' ' << min(a, b) << endl;
    }
}
