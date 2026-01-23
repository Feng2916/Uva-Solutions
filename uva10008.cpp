#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    char c;
    vector<char> alphabet;
    vector<int> cnt;

    while (cin >> c) {
        if ((c - 'A' >= 0 && c - 'Z' <= 0) || (c - 'a' >= 0 && c - 'z' <= 0)) {
            char cu = toupper(c);
            bool check = 0;

            for (int i = 0; i < alphabet.size(); ++i) {
                if (alphabet[i] == cu) {
                    ++cnt[i];
                    check = 1;
                    break;
                }
            }

            if (!check) {
                alphabet.push_back(cu);
                cnt.push_back(1);
            }
        }
    }

    for (int i = 0; i < cnt.size(); ++i) {
        int maxIndex = 0;
        for (int j = 0; j < cnt.size(); ++j) {
            if (cnt[j] > cnt[maxIndex]) maxIndex = j;
            else if (cnt[j] == cnt[maxIndex]) {
                if (alphabet[j] < alphabet[maxIndex]) maxIndex = j;
            }
        }
        cout << alphabet[maxIndex] << ' ' << cnt[maxIndex] << '\n';
        cnt[maxIndex] = 0;
    }
}
