/*  11321 Sort! Sort!! and Sort!!!
    sorting priority:
        1. small mod M val -> large
        2. odd num -> even
        3. (both odd) large num -> small
        4. (both even) small num -> large

    * be careful when checking if a neg num is odd 
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector <int>

int M;

bool cmp (int &a, int &b) {
    int oddA = abs (a%2), oddB = abs (b%2);
    if (a%M != b%M)
        return a%M < b%M;
    if (oddA != oddB)
        return oddA > oddB;
    if (oddA && oddB)
        return a > b;
    return a < b;
}

int main () {
    ios::sync_with_stdio(0); cin.tie(0);

    int N;
    while (cin >> N >> M && N && M) {
        vi num (N);
        for (int i = 0; i < N; ++i)
            cin >> num[i];

        sort (num.begin(), num.end(), cmp);

        cout << N << ' ' << M << '\n';
        for (int n: num)
            cout << n << '\n';
    }

    cout << "0 0\n";
}