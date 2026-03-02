#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {
        int N, P, h;
        vector<int> hartals;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            cin >> h;
            hartals.push_back(h);
        }

        int sum = 0;
        for (int i = 1; i < N+1; ++i) {
            bool check = 0;
            for (int j = 0; j < P; ++j) {
                if (i % hartals[j] == 0) {
                    check = 1;
                    break;
                }
            }
            if (check) {
                if (i % 7 != 0 && i % 7 != 6) ++sum;
            }
        }

        cout << sum << endl;
    }
}
