/*  10062 Tell me the frequencies!
    calc the appearing times of all chars in a line
    sort:
        1. asc times
        2. desc ascii val

    * blank lines are between two diff set
 */

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

#define mii map <int, int>
#define pii pair <int, int>
#define vpii vector <pii>

bool cmp (pii &a, pii &b) {
    if (a.second != b.second)
        return a.second < b.second;

    return a.first > b.first;
}

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    
    string s;
    bool first = 1;
    while (getline (cin, s)) {
        mii cnt;

        for (char ch: s)
            ++cnt[ch];

        vpii res (cnt.begin(), cnt.end());
        sort (res.begin(), res.end(), cmp);

        if (first)
            first = 0;
        else
            cout << '\n';
        for (pii it: res)
            cout << it.first << ' ' << it.second << '\n';
    }
}