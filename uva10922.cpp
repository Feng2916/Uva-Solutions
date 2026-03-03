#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string N;
    while (cin >> N && N != "0") {
        string S = N;
        int cnt = 1, sum;
        while (1) {
            sum = 0;
            for (int i = 0; i < S.size(); ++i) sum += S[i] - '0';
            S = to_string(sum);
            if (S.size() == 1) break;
            ++cnt;
        }

        if (sum % 9 == 0) cout << N << " is a multiple of 9 and has 9-degree " << cnt << ".\n";
        else cout << N << " is not a multiple of 9.\n";
    }
}
