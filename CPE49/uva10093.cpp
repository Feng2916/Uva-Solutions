/*  10093 An Easy Problem!
    find smallest N with R%(N-1) == 0, 2 <= N <= 62
    transfer R to base 10 num:
        digits 0..9 -> 0..9
        uppercase letters A..Z -> 10..35
        lowercase letters a..z -> 36..61

    * min N = min (2, (base 10 num of the smallest digit)+1)
 */

#include <iostream>
using namespace std;

#define ll long long

int main () {
    ios::sync_with_stdio(0); cin.tie(0);

    string s;
    while (getline (cin, s)) {
        ll sum = 0;
        int maxi = 1;

        for (char ch: s) {
            if (isdigit (ch)) {
                sum += ch-'0';
                maxi = max (maxi, ch-'0');
            }
            else if (isupper (ch)) {
                sum += ch-'A'+10;
                maxi = max (maxi, ch-'A'+10);
            }
            else if (islower (ch)) {
                sum += ch-'a'+36;
                maxi = max (maxi, ch-'a'+36);
            }
        }
        
        int i = maxi+1;
        for (; i <= 62; ++i) {
            if (sum%(i-1) == 0) {
                cout << i << '\n';
                break;
            }
        }

        if (i == 63)
            cout << "such number is impossible!\n";
    }
}