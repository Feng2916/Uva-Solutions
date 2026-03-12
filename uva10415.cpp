#include <bits/stdc++.h>
using namespace std;

void cntnum (string now, string cmp, vector <int>& cnt) {
    for (int i = 0; i < 8; ++i) {
        if (now[i] != cmp[i] && cmp[i] == '1') ++cnt[i];
    }
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string init = "00000000";
    string c = "01111111";
    string d = "01111110";
    string e = "01111100";
    string f = "01111000";
    string g = "01110000";
    string a = "01100000";
    string b = "01000000";
    string C = "00100000";
    string D = "11111110";
    string E = "11111100";
    string F = "11111000";
    string G = "11110000";
    string A = "11100000";
    string B = "11000000";

    string song;
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        vector <int> cnt (8, 0);
        getline(cin, song);
        stringstream ss(song);

        char s;
        string now = init;
        while (ss >> s) {
            if (s == 'c') {
                cntnum(now, c, cnt);
                now = c;
            }
            else if (s == 'd') {
                cntnum(now, d, cnt);
                now = d;
            }
            else if (s == 'e') {
                cntnum(now, e, cnt);
                now = e;
            }
            else if (s == 'f') {
                cntnum(now, f, cnt);
                now = f;
            }
            else if (s == 'g') {
                cntnum(now, g, cnt);
                now = g;
            }
            else if (s == 'a') {
                cntnum(now, a, cnt);
                now = a;
            }
            else if (s == 'b') {
                cntnum(now, b, cnt);
                now = b;
            }
            else if (s == 'C') {
                cntnum(now, C, cnt);
                now = C;
            }
            else if (s == 'D') {
                cntnum(now, D, cnt);
                now = D;
            }
            else if (s == 'E') {
                cntnum(now, E, cnt);
                now = E;
            }
            else if (s == 'F') {
                cntnum(now, F, cnt);
                now = F;
            }
            else if (s == 'G') {
                cntnum(now, G, cnt);
                now = G;
            }
            else if (s == 'A') {
                cntnum(now, A, cnt);
                now = A;
            }
            else if (s == 'B') {
                cntnum(now, B, cnt);
                now = B;
            }
        }

        for (int i = 0; i < 8; ++i) {
            if (i == 4) cout << ' ' << 0 << ' ' << 0;
            if (i) cout << ' ';
            cout << cnt[i];
        }
        cout << '\n';
    }
}
