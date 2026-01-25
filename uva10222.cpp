#include <bits/stdc++.h>
using namespace std;

int main () {
    string encode = "234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./ ";
    string decode = "`1234567890qwertyuiop[asdfghjklzxcvbnm, ";

    string s;
    while (getline(cin, s)) {
        for (int i = 0; i < s.size(); ++i) {
            for (int j = 0; j < encode.size(); ++j) {
                if (tolower(s[i]) == encode[j]) cout << decode[j];
            }
        }
        cout << '\n';
    }
}
