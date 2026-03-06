#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    long long x1, y1, x2, y2;
    cin >> tc;

    for (int t = 1; t <= tc; ++t) {
        cin >> x1 >> y1 >> x2 >> y2;
        long long p1 = (x1+y1) * ((x1+y1)+1)/2 + (x1+1);
        long long p2 = (x2+y2) * ((x2+y2)+1)/2 + (x2+1);
        cout << "Case " << t << ": " << p2-p1 << '\n';
    }
}
