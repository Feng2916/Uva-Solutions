#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string num;
    while (cin >> num && num != "0") {
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < num.size(); ++i) {
            (i%2)? (sum1 += num[i] - '0'): (sum2 += num[i] - '0');
        }

        cout << num << (!((sum1 - sum2)%11)? " is": " is not") << " a multiple of 11.\n";
    }
}
