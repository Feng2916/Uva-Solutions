#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;

    while (cin >> tc) {
        int N, I;
        double P;
        for (int i = 0; i < tc; ++i) {
            cin >> N >> P >> I;
            cout << fixed << setprecision(4) << ((P)? P * pow(1-P, I-1) / (1 - pow(1-P, N)): 0.0) << endl;
        }
    }
}
