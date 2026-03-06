#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, mid1, mid2;
    while (cin >> n) {
        vector<int> X(n);
        int cnt = 0;
        for (int i = 0; i < n; ++i) cin >> X[i];
        sort(X.begin(), X.end());

        if (n%2) {
            mid1 = X[n/2];
            mid2 = mid1;
        }
        else {
            mid1 = X[(n-1)/2];
            mid2 = X[n/2];
        }

        for (int i = 0; i < n; ++i) {
            if (X[i] == mid1 || X[i] == mid2) ++cnt;
        }

        cout << mid1 << ' ' << cnt << ' ' << ((mid1==mid2)? 1: mid2-mid1+1) << '\n';
    }
}
