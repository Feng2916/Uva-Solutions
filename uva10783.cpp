#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        int a, b;
        cin >> a >> b;
        if (a%2==0) ++a;
        if (b%2==0) --b;
        cout << "Case " << i << ": " << pow((b+1)/2, 2) - pow((a-1)/2, 2) << endl;
    }
}
