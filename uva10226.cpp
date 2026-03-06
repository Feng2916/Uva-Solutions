#include <bits/stdc++.h>
using namespace std;

bool cmp (pair<string, double> &a, pair <string, double> &b) { return a.first < b.first; }

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    string t;
    cin >> tc;
    cin.ignore(2);

    while (tc--) {
        int total = 0;
        map <string, double> cnt;
        while (getline(cin, t) && t != "") {
            cnt[t] += 1.0;
            ++total;
        }

        map <string, double>::iterator it = cnt.begin();
        for (; it != cnt.end(); ++it) cout << fixed << setprecision(4) << it->first << ' ' << it->second/total*100 << '\n';

        if (tc > 0) cout << '\n';
    }
}
