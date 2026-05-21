/*  10812 Beat the Spread!
    sum = x+(diff+x)
    => x = (sum-diff)/2
       x >= 0, x must be an int
 */

#include <iostream>
using namespace std;

int main () {
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;

    int s, d;
    for (int i = 0; i < n; ++i) {
        cin >> s >> d;

        int a = (s-d)/2;
        if (s-d >= 0 && (s-d)%2 == 0)
            cout << d+a << ' ' << a << '\n';
        else
            cout << "impossible\n";
    }
}