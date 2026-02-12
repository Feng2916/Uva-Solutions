#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string a, b;
    while (getline(cin, a) && getline(cin, b)) {
        int cnt1[26] = {0};
        int cnt2[26] = {0};

        for (int i = 0; i < a.size(); ++i) ++cnt1[a[i]-'a'];
        for (int i = 0; i < b.size(); ++i) ++cnt2[b[i]-'a'] ;

        for (int i = 0; i < 26; ++i) {
            if (cnt1[i] && cnt2[i]) {
                for (int j = 1; j <= min(cnt1[i], cnt2[i]); ++j) {
                    char res = 'a' + i;
                    cout << res;
                }
            }
        }

        cout << endl;
    }
}
