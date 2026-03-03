#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, n, m;
    cin >> tc;
    while (tc--) {
        cin >> n >> m;
        int row = (n-2)/3, col = (m-2)/3;
        if ((n-2)%3) ++row;
        if ((m-2)%3) ++col;
        cout << row*col << '\n';
    }
}
