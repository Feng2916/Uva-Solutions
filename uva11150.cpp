#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int N;
    while (cin >> N) {
        int cnt = 0, full = N, empty = 1;
        while (full+empty >= 3) {
            cnt += full;
            empty = full+empty;
            full = empty/3;
            empty = empty%3;
        }
        cnt += full;

        cout << cnt << '\n';
    }
}