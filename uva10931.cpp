#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int I;
    while (cin >> I && I != 0) {
        int cnt = 0;
        stack<bool> bi;
        int i = I;

        while (i != 0) {
            if (i % 2 == 1) {
                bi.push(1);
                ++cnt;
            }
            else bi.push(0);
            i /= 2;
        }

        cout << "The parity of ";
        while (!bi.empty()) {
            cout << bi.top();
            bi.pop();
        }
        cout << " is " << cnt << " (mod 2).\n";
    }
}
