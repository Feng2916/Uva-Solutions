#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    while (cin >> n && n) {
        vector <int> side {1, 2, 3, 4, 5, 6};
        string s;
        for (int i = 0; i < n; ++i) {
            cin >> s;
            if (s == "east") side = {side[2], side[1], side[5], side[0], side[4], side[3]};
            else if (s == "west") side = {side[3], side[1], side[0], side[5], side[4], side[2]};
            else if (s == "south") side = {side[1], side[5], side[2], side[3], side[0], side[4]};
            else if (s == "north") side = side = {side[4], side[0], side[2], side[3], side[5], side[1]};
        }

        cout << side[0] << '\n';
    }
}
