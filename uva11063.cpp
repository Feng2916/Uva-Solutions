#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, i;
    int tc = 1;
    while (cin >> n) {
        vector<int> seq;
        bool valid = 1;
        int prev = INT_MIN;
        for (int l = 0; l < n; ++l) {
            cin >> i;
            seq.push_back(i);
            if (i < 1 || i <= prev) valid = 0;
            prev = i;
        }

        if (valid) {
            set<int> sum;
            for (int j = 0; j < n-1; ++j) {
                for (int k = j; k < n; ++k) {
                    int s = seq[j]+seq[k];
                    if (sum.find(s) != sum.end()) {
                        valid = 0;
                        break;
                    }
                    sum.insert(s);
                }
                if (!valid) break;
            }
        }
        cout << "Case #" << tc++ << ": It is " << ((valid)? "": "not ") << "a B2-Sequence.\n\n";
    }
}
