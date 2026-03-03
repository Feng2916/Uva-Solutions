#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, M, N, Q, r, c;
    cin >> tc;
    while (tc--) {
        cin >> M >> N >> Q;
        cout << M << ' ' << N << ' ' << Q << '\n';
        vector<char> rec(M*N);
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) cin >> rec[i*N+j];
        }

        for (int i = 0; i < Q; ++i) {
            cin >> r >> c;
            char middle = rec[r*N+c];
            int width = min(min(c, N-1-c), min(r, M-1-r));

            while (width) {
                bool valid = 1;
                int left = c - width, right = c + width, up = r - width, down = r + width;

                for (int u = up; u <= down && valid; ++u) {
                    for (int l = left; l <= right; ++l) {
                        if (rec[u*N+l] != middle) {
                            valid = 0;
                            break;
                        }
                    }
                }

                if (valid) break;
                else --width;
            }

            cout << width*2+1 << '\n';
        }
    }
}
