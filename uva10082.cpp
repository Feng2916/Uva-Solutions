#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string encode = "1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";
    string decode = "`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,.";

    char ch;
    while (cin.get(ch)) {
        bool find = 0;
        for (int i = 0; i < encode.size(); ++i) {
            if (encode[i] == ch) {
                cout << decode[i];
                find = 1;
                break;
            }
        }
        if (!find) cout << ch;
    }
}
