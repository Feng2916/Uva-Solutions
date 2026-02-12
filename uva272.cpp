#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int quote = 0;
    string s;

    while (getline(cin, s)) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '"') {
                cout << ((quote)? "''": "``");
                quote = !quote;
            }
            else cout << s[i];
        }
        cout << endl;
    }
}
