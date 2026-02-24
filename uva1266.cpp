#include <bits/stdc++.h>
using namespace std;

int main () {
        ios_base::sync_with_stdio(0); cin.tie(0);

        int N;
        bool first = 1;
        while (cin >> N) {
                cout << ((first)? "": "\n");
                first = 0;
                int p = to_string(N*N).size();

                vector<int> num(N*N, 0);
                num[N/2] = 1;
                for (int i = N-1, j = N/2+1, n = 2; n <= N*N; i = (i+N-1)%N, j = (j+1)%N, ++n) {
                        if (num[i*N+j]) {
                                i = (i+2)%N;
                                j = (j+N-1)%N;
                        }
                        num[i*N+j] = n;
                }

                cout << "n=" << N << ", sum=" << N*(N*N+1)/2 << endl;
                for (int i = 0; i < N; ++i) {
                        for (int j = 0; j < N; ++j) {
                                cout << setw(p+1) << num[i*N+j];
                        }
                        cout << endl;
                }
        }
}
