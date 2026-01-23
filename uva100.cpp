#include <bits/stdc++.h>
using namespace std;

int alg (int n) {
    int cnt = 1;
    while (n != 1) {
        if (n % 2) {
            n = (3*n + 1)/2;
            cnt += 2;
        } else {
            n /= 2;
            ++cnt;
        }
    }
    return cnt;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int i, j;
    while (cin >> i >> j) {
        int maxlen = INT_MIN;
        for (int k = min(i, j); k <= max(i,j); ++k) {
            int len = alg(k);
            if (len > maxlen) {
                maxlen = len;
            }
        }
        cout << i << ' ' << j << ' ' << maxlen << '\n';
    }
}
