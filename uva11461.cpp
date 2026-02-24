#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int a, b;
    while (cin >> a >> b) {
        if (!a && !b) break;
        int A = sqrt(a);
        if (A != sqrt(a)) ++A;
        int B = sqrt(b);
        cout << B - A + 1 << endl;
    }
}
