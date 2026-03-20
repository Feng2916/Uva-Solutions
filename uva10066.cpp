#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int N1, N2, cnt = 1;
    while (cin >> N1 >> N2 && N1 && N2) {
        vector <int> tw1 (N1);
        vector <int> tw2 (N2);
        for (int i = 0; i < N1; ++i) cin >> tw1[i];
        for (int i = 0; i < N2; ++i) cin >> tw2[i];

        vector <vector <int>> dp (N1+1, vector <int> (N2+1, 0));
        for (int i = 1; i <= N1; ++i) {
            for (int j = 1; j <= N2; ++j) {
                if (tw1[i-1]==tw2[j-1]) dp[i][j] = dp[i-1][j-1]+1;
                else dp[i][j] = max (dp[i-1][j], dp[i][j-1]);
            }
        }

        cout << "Twin Towers #" << cnt++ << "\nNumber of Tiles : " << dp[N1][N2] << "\n\n";
    }
}