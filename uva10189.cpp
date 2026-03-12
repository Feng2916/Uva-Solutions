#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, cnt = 1;
    while (cin >> n >> m && n != 0 && m != 0) {
        cout << ((cnt == 1)? "": "\n") << "Field #" << cnt << ":\n";

        vector <vector<char>> field;
        for (int i = 0; i < n; ++i) {
            vector <char> row(m);
            for (int j = 0; j < m; ++j) cin >> row[j];
            field.emplace_back(row);
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int res = 0;
                for (int r = i-1; r <= i+1; ++r) {
                    if (r < 0 || r >= n) continue;
                    for (int c = j-1; c <= j+1; ++c) {
                        if (c < 0 || c >= m) continue;
                        if (r == i && c == j) continue;
                        if (field[r][c] == '*') ++res;
                    }
                }
                if (field[i][j] == '*') cout << '*';
                else cout << res;
            }
            cout << '\n';
        }
        ++cnt;
    }
}
