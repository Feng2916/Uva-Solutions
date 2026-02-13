#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int month[11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    string day[7] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    int tc, m, d;

    while (cin >> tc) {
        for (int i = 0; i < tc; ++i) {
        int res = 0;
            cin >> m >> d;

            for (int j = 1; j < m; ++j) res += month[j-1];
            res = (res + d) % 7;
            cout << day[res] << endl;
        }
    }
}
