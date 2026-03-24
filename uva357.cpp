#include <bits/stdc++.h>
using namespace std;

vector <int> coins = {1, 5, 10, 25, 50};

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    while (cin >> n) {
        vector <long long> dp (n+1, 0);
        dp[0] = 1;
        for (auto c: coins) {
            for (int i = 1; i <= n; ++i) {
                if (i-c >= 0) dp[i] += dp[i-c];
            }
        }
        cout << "There ";
        if (dp[n] == 1) cout << "is only " << dp[n] << " way";
        else cout << "are " << dp[n] << " ways";
        cout << " to produce " << n << " cents change.\n";
    }
}