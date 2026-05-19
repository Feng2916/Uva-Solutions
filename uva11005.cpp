#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    bool first = 1;
    cin >> tc;
    for (int t = 1; t <= tc; ++t) {
        if (!first) cout << endl;
        else first = 0;

        cout << "Case " << t << ":\n";
        vector<int> cost(36, 0);
        for (int i = 0; i < 36; ++i) cin >> cost[i];

        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            long long query;
            cin >> query;

            vector<int> cheapest(37, 0);

            for (int j = 2; j <= 36; ++j) {
                vector<int> text;
                int q = query;
                while (q != 0 && query != 0) {
                    text.push_back(q % j);
                    q /= j;
                }
                if (query == 0) text.push_back(0);

                for (int k = 0; k < text.size(); ++k) {
                    cheapest[j] += cost[text[k]];
                }
            }

            int minimum = INT_MAX;
            for (int j = 2; j <= 36; ++j) minimum = min(cheapest[j], minimum);

            cout << "Cheapest base(s) for number " << query << ":";
            for (int j = 2; j <= 36; ++j) {
                if (cheapest[j] == minimum) cout << ' ' << j;
            }
            cout << endl;
        }
    }
}
