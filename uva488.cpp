#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, A, F;
    bool first = 1;
    cin >> tc;
    while (tc--) {
        cin >> A >> F;

        for (int i = 0; i < F; ++i) {
            if (first) first = 0;
            else cout << "\n";

            for (int j = 1; j <= A; ++j) {
                for (int k = 0; k < j; ++k) cout << j;
                cout << '\n';
            }
            for (int j = A-1; j >= 1; --j) {
                 for (int k = 0; k < j; ++k) cout << j;
                 cout << '\n';
            }
        }
    }
}
