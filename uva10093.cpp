#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int ans, sum, lb;
    string n;
    while (cin >> n) {
        vector<int> N;
        int sum = 0, ans = 0, lb = 0;

        for (int i= 0; i < n.size(); ++i) {
            if (isdigit(n[i])) N.push_back(n[i] - '0');
            else if (isupper(n[i])) N.push_back(n[i] - 'A' + 10);
            else if (islower(n[i])) N.push_back(n[i] - 'a' + 36);
        }

        for (int i = 0; i < N.size(); ++i){
            lb = max(lb, N[i]);
            sum += N[i];
        }

        for (int i = max(2, lb + 1) ; i <= 62; ++i) {
            if (sum % (i - 1) == 0) {
                ans = i;
                break;
            }
        }

        cout << (!ans ? "such number is impossible!" : to_string(ans)) << endl;
    }
}
