/*  11063 B2-Sequence
    B2-Seq:
        1 <= b1 < b2 < ...
        all bi+bj sums are unique, i <= j

    * blank lines after each case
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector <int>

int main () {
    ios::sync_with_stdio(0); cin.tie(0);

    int N, caseCnt = 1;
    while (cin >> N) {
        bool isB2 = 1;

        vi seq (N);
        for (int i = 0; i < N; ++i)
            cin >> seq[i];

        for (int i = 0; i < N-1; ++i) {
            if (seq[i] <= 0 || seq[i] >= seq[i+1]) {
                isB2 = 0;
                break;
            }
        }

        if (isB2) {
            vi diff;
            for (int i = 0; i < N; ++i) {
                for (int j = i; j < N; ++j)
                    diff.emplace_back (seq[i]+seq[j]);
            }

            sort (diff.begin(), diff.end());
            vi diffCopy = diff;
            diffCopy.erase (unique (diffCopy.begin(), diffCopy.end()), diffCopy.end());

            if (diff != diffCopy)
                isB2 = 0;
        }

        cout << "Case #" << caseCnt++ << ": It is " << ((isB2)? "": "not ") << "a B2-Sequence.\n\n";
    }
}