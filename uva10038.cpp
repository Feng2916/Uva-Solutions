#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, n;
    while (cin >> tc) {
        vector<int> num;
        for (int i = 0; i < tc; ++i) {
            cin >> n;
            num.push_back(n);
        }

        vector<int> diff;
        for (int i = 0; i < tc-1; ++i) diff.push_back(abs(num[i] - num[i+1]));
        sort(diff.begin(), diff.end());

        int i = 0;
        for (; i < diff.size(); ++i) {
            if (diff[i] != i + 1) {
                cout << "Not jolly\n";
                break;
            }
        }
        if (i == diff.size()) cout << "Jolly\n";
    }
}
