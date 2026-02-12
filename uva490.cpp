#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    vector<string> sts;
    string s;
    int smax = INT_MIN;
    while (getline(cin, s)) {
        sts.push_back(s);
        int ssize = s.size();
        smax = max(ssize, smax);
    }

    for (int i = 0; i < smax; ++i) {
        for (int j = sts.size()-1; j >= 0; --j) {
            if (i < sts[j].size()) cout << sts[j][i];
            else cout << ' ';
        }
        cout << endl;
    }
}
