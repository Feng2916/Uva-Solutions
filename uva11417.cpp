#include <bits/stdc++.h>
using namespace std;

int GCD (int a, int b) { return (!b)? a: GCD(b, a%b); }

long long cal (int N) {
    long long G = 0;
    for (int i = 1; i < N; ++i) {
        for (int j = i+1; j <= N; ++j) {
            G += GCD(i, j);
        }
    }
    return G;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int N;
    while (cin >> N && N) cout << cal(N) << '\n';
}
