#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector <long long> vll;

vll subsetSum (int N, vll &S) {
    vll res;
    for (int i = 0; i < (1<<N); ++i) {
        ll sum = 0;
        for (int j = 0; j < N; ++j) {
            if (i & (1<<j))
                sum += S[j];
        }
        res.emplace_back(sum);
    }

    return res;
}

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen ("in.txt", "r", stdin);

    ll N, T;
    while (cin >> N >> T) {
        vll S (N);
        for (int i = 0; i < N; ++i)
            cin >> S[i];
        
        vll left, right;
        for (int i = 0; i < N; ++i) {
            if (i < N/2)
                left.emplace_back(S[i]);
            else
                right.emplace_back(S[i]);
        }

        vll L = subsetSum (left.size(), left);
        vll R = subsetSum (right.size(), right);
        sort (R.begin(), R.end());

        ll res = 0;
        for (ll sum: L) {
            auto r = equal_range (R.begin(), R.end(), T-sum);
            res += distance (r.first, r.second);
        }
        cout << ((T)? res: res-1) << '\n';
    }
}