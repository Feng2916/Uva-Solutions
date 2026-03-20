#include <bits/stdc++.h>
using namespace std;

vector <int> val (1e6, 0);
vector <bool> rd (1e6, 0);

int alg (int n) {
    int cnt = 1;
    int N = n;
    while (n!=1) {
        if (n<1e6 && rd[n]) {
            cnt += val[n]-1;
            break;
        }
        else if (n%2) {
            n = (3*n+1)/2;
            cnt += 2;
        } else {
            n /= 2;
            ++cnt;
        }
    }
    if (N<1e6) {
        val[N] = cnt;
        rd[N] = 1;
    }
    return cnt;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int i, j;
    while (cin >> i >> j) {
        int maxlen = INT_MIN;
        for (int k = min (i, j); k <= max (i, j); ++k) {
            int len = alg(k);
            if (len > maxlen) maxlen = len;
        }
        cout << i << ' ' << j << ' ' << maxlen << '\n';
    }
}
