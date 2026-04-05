#include <iostream>
using namespace std;
typedef long long ll;

ll F (ll n) {
    if (n <= 0)
        return 0;

    ll sum = n/10*45;
    for (ll i = (n/10)*10+1; i <= n; ++i) {
        ll I = i;
        while (!(I%10))
            I /= 10;
        sum += I%10;
    }

    return sum + F (n/10);
}

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen ("in.txt", "r", stdin);

    int p, q;
    while (cin >> p >> q && p >= 0 && q >= 0) {
        cout << F (q)-F (p-1) << '\n';
    }
}