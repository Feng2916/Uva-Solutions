/*  10252 Common Permutation
    find all "lowercase letters" appearing in a and b
    permute them by asc alphabetical order

    * empty lines are also seq
 */

#include <iostream>
#include <vector>
using namespace std;

#define vi vector <int>

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    
    string a, b;
    while (getline (cin, a) && getline (cin, b)) {
        vi cntA (26, 0);
        vi cntB (26, 0);

        for (char ch: a)
            ++cntA[ch-'a'];
        for (char ch: b)
            ++cntB[ch-'a'];

        for (int i = 0; i < 26; ++i) {
            for (int j = 0; j < min (cntA[i], cntB[i]); ++j)
                cout << (char) ('a'+i);
        }
        cout << '\n';
    }
}