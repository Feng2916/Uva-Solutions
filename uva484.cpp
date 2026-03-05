#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int i;
    map<int, int> cnt;
    vector<int> oc;

    while (cin >> i) {
        if (cnt.find(i) != cnt.end()) ++cnt[i];
        else {
            cnt[i] = 1;
            oc.push_back(i);
        }
    }

    for (int j = 0; j < oc.size(); ++j) cout << oc[j] << ' ' << cnt[oc[j]] << '\n';
}
