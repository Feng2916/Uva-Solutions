#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair <char, int> pci;

bool cmp (pci &a, pci &b) {
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen ("in.txt", "r", stdin);

    int n;
    cin >> n;
    string s;
    map <char, int> alpha;

    cin.ignore();
    while (n--) {
        // only alpha
        // upper = lower
        // desc count
        // previous alpha
        getline (cin, s);
        for (auto ch: s) {
            if (isalpha (ch))
                ++alpha[toupper(ch)];
        }
    }

    // map -> vector for sorting
    vector <pci> A;
    for (auto it: alpha)
        A.emplace_back(it.first, it.second);

    sort (A.begin(), A.end(), cmp);
    for (auto it: A)
        cout << it.first << ' ' << it.second << '\n';
}