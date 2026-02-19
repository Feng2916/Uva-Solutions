#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int S;
    long long D;
    while (cin >> S >> D) {
        long long res = 0;
        for (; res < D; res +=S, ++S) {}
        cout << S-1 << endl;
    }
}
