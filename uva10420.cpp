#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin >> tc;
    map<string, int> m;

    while (tc--) {
        string country, rest;
        cin >> country;
        getline(cin, rest);

        if (m.find(country) != m.end()) ++m[country];
        else m[country] = 1;
    }

    for (auto it = m.begin(); it != m.end(); ++it) cout << it->first << ' ' << it->second << '\n';
}
