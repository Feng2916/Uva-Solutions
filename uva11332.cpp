#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    while (cin >> n && n) cout << ((n % 9)? n % 9: 9) << endl;
}
