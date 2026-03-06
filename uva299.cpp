#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, L;
    cin >> tc;
    while (tc--) {
        cin >> L;
        vector<int> N(L);
        for (int i = 0; i < L; ++i) cin >> N[i];

        int cnt = 0;
        for (int i = 0; i < L-1; ++i) {
            for (int j = i+1; j < L; ++j) {
                if (N[i] > N[j]) {
                    swap(N[i], N[j]);
                    ++cnt;
                }
            }
        }

        cout << "Optimal train swapping takes " << cnt << " swaps.\n";
    }
}
