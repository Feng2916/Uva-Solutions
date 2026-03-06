#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second != b.second) return a.second < b.second;
    else return a.first > b.first;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string s;
    bool first = 1;
    while (getline(cin, s)) {
        if (first) first = 0;
        else cout << '\n';

        map<int, int> cnt;
        for (char ch: s) {
            int a = ch;
            ++cnt[a];
        }

        vector<pair<int, int>> ascii(cnt.begin(), cnt.end());
        sort(ascii.begin(), ascii.end(), cmp);
        for (int i = 0; i < ascii.size(); ++i) cout << ascii[i].first << ' ' << ascii[i].second << '\n';
    }
}
