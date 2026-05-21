/*  10908 Largest Square
    layer by layer expansion from (r, c) to check
    output the maximum side length of the square
    
    * out of bounds protection
 */

#include <iostream>
#include <vector>
using namespace std;

#define vs vector <string>

int main () {
    ios::sync_with_stdio(0); cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int M, N, Q;
        cin >> M >> N >> Q;
        cout << M << ' ' << N << ' ' << Q << '\n';

        vs grid (M);
        for (int i = 0; i < M; ++i)
            cin >> grid[i];

        int r, c;
        for (int q = 0; q < Q; ++q) {
            cin >> r >> c;

            bool valid = 1;
            int length = 1;
            char target = grid[r][c];
            while (valid) {
                for (int i = -length; i <= length && valid; ++i) {
                    for (int j = -length; j <= length && valid; ++j) {
                        if (abs (i) != length && abs (j) != length)
                            continue;
                        if (r+i < 0 || c+j < 0 || r+i >= M || c+j >= N)
                            valid = 0;
                        else if (grid[r+i][c+j] != target)
                            valid = 0;
                    }
                }

                if (valid)
                    ++length;
            }

            cout << 2*(length-1)+1 << '\n';
        }
    }
}