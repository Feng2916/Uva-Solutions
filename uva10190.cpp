#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m;
    while (cin >> n >> m) {
        if (m < 2 || n < 2 || n < m) {
            cout << "Boring!\n";
            continue;
        }

        vector<int> seq;
        while (n) {
            seq.push_back(n);
            if (n == 1) break;
            if (n % m != 0) break;
            n /= m;
        }

        if (n != 1) cout << "Boring!\n";
        else {
            for (int i = 0; i < seq.size(); ++i) {
                if (i) cout << ' ';
                cout << seq[i];
            }
            cout << endl;
        }
    }
}
