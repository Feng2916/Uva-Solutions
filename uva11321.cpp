#include <bits/stdc++.h>
using namespace std;

bool cmp (pair <int, int> &a, pair <int, int> &b) {
    bool A = a.second%2, B = b.second%2;
    if (a.first != b.first) return a.first < b.first;
    else {
        if (A != B) return A > B;
        else if (A && B) return a.second > b.second;
        else return a.second < b.second;
    }
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int N, M;
    while (cin >> N >> M && N && M) {
        cout << N << ' ' << M << '\n';

        vector <int> num (N);
        for (int i = 0; i < N; ++i) cin >> num[i];

        vector <pair<int, int>> modM (N);
        for (int i = 0; i < N; ++i) modM[i] = {num[i]%M, num[i]};
        sort (modM.begin(), modM.end(), cmp);

        for (int i = 0; i < N; ++i) cout << modM[i].second << '\n';
    }
    cout << 0 << ' ' << 0 << '\n';
}