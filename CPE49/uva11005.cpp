/*  11005 Cheapest Base
    convert the query decimal int to bases 2-36
    calc the total costs of digits in each bases
    find the minimum cost

    * blank lines between cases
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector <int>

int main () {
    ios::sync_with_stdio(0); cin.tie(0);

    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        vi costs (36);
        for (int i = 0; i < 36; ++i)
            cin >> costs[i];

        int q;
        cin >> q;

        if (t != 1)
            cout << '\n';
        cout << "Case " << t << ":\n";

        for (int i = 0; i < q; ++i) {
            int query;
            cin >> query;

            vi totalCosts (37, 0);
            for (int base = 2; base <= 36; ++base) {
                vi number;
                int q = query;
                for (; q; q /= base) {
                    number.emplace_back (q%base);
                }

                if (number.empty())
                    number.emplace_back (0);

                for (int n: number)
                    totalCosts[base] += costs[n];
            }

            int cheapest = *min_element (totalCosts.begin()+2, totalCosts.end());

            cout << "Cheapest base(s) for number " << query << ":";
            for (int j = 2; j <= 36; ++j) {
                if (totalCosts[j] == cheapest)
                    cout << ' ' << j;
            }
            cout << '\n';
        }
    }
}