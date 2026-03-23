#include <bits/stdc++.h>
using namespace std;

vector <int> coins = {50, 25, 10, 5, 1};

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    vector <int> dp (7490, 0);
    dp[0] = 1;
        
    for (auto c: coins) {
        for (int i = 1; i <= 7489; ++i) {
            if (i-c >= 0) dp[i] += dp[i-c];
        }
    }

    int m;
    while (cin >> m) cout << dp[m] << '\n';
}