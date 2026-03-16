// priority of sorting
// 1. small remainder > large remainder
// 2. odd num > even num
// 3. large odd num > small odd num
// 4. large even num < small even num

#include <bits/stdc++.h>
using namespace std;

int M;

bool cmp (int &a, int &b) {
    if (a%M != b%M) return a%M < b%M;
    bool A = a%2, B = b%2;
    if (A != B) return A > B;
    else if (A && B) return a > b;
    return a < b;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int N;
    while (cin >> N >> M && N && M) {
        cout << N << ' ' << M << '\n';

        vector <int> modM (N);
        int n;
        for (int i = 0; i < N; ++i) cin >> modM[i];
        sort (modM.begin(), modM.end(), cmp);

        for (int i = 0; i < N; ++i) cout << modM[i] << '\n';
    }
    cout << 0 << ' ' << 0 << '\n';
}