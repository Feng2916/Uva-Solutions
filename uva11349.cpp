#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        int s;
        char c;
        cin >> c >> c >> s;

        vector<long long> m;
        bool positive = 1;
        for (int j = 0; j < s*s; ++j) {
            long long n;
            cin >> n;
            m.push_back(n);
            if (n < 0) positive = 0;
        }

        int j;
        if (!positive) cout << "Test #" << i << ": Non-symmetric." << "\n";
        else {
            for (j = 0; j < m.size()/2; ++j) {
                if (m[j] != m[m.size()-1-j]) {
                    cout << "Test #" << i << ": Non-symmetric." << "\n";
                    break;
                }
            }
            if (j == m.size()/2) cout << "Test #" << i << ": Symmetric.\n";
        }
    }
}
