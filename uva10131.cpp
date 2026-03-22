#include <bits/stdc++.h>
using namespace std;

struct elp { int num, weight, iq; };

bool cmp (elp &a, elp &b) {
    if (a.weight != b.weight) return a.weight < b.weight;
    else return a.iq > b.iq;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int weight, iq, cnt = 1;
    vector <elp> E;
    while (cin >> weight >> iq) {
        elp e = {cnt++, weight, iq};
        E.emplace_back(e);
    }
    
    sort (E.begin(), E.end(), cmp);
    
    vector <int> dp (E.size(), 1);
    vector <int> idx (E.size(), INT_MAX);
    for (int i = 0; i < E.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (E[i].weight > E[j].weight && E[i].iq < E[j].iq) {
                if (dp[i]<dp[j]+1) {
                    dp[i] = dp[j]+1;
                    idx[i] = j;
                }
            }
        }
    }
    
    auto it = max_element (dp.begin(), dp.end());
    int len = *it;
    int last = distance (dp.begin(), it);

    stack <int> res;
    while (last != INT_MAX) {
        res.push(E[last].num);
        last = idx[last];
    }

    cout << len << '\n';
    while (!res.empty()) {
        cout << res.top() << '\n';
        res.pop();
    }
}