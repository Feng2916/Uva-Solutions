#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    while (cin >> tc) {
        for (int i = 0; i < tc; ++i) {
            int n;
            cin >> n;
            vector<int> relatives;
            int r;
            for (int j = 0; j < n; ++j) {
                cin >> r;
                relatives.push_back(r);
            }
            sort(relatives.begin(), relatives.end());

            // find the median
            int median = relatives[n/2];

            // find the minimal sum of distances
            long long sum = 0;
            for (int j = 0; j < n; ++j) sum += abs(relatives[j] - median);
            cout << sum << endl;
        }
    }
}
