// zoom in the num stored in a vector in advance
// output a blank line after each num

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    vector <string> LC = {
        " -     -  -     -  -  -  -  - ",
        "| |  |  |  || ||  |    || || |",
        "       -  -  -  -  -     -  - ",
        "| |  ||    |  |  || |  || |  |",
        " -     -  -     -  -     -  - "
    };
    int s;
    string n;
    while (cin >> s >> n) {
        if (!s && n == "0") break;

        int r, c;
        for (int i = 0; i < 2*s+3; ++i) {
            if (i==0) r = 0;
            else if (i<s+1) r = 1;
            else if (i==s+1) r = 2;
            else if (i<2*s+2) r = 3;
            else r = 4;
            for (int j = 0; j < (s+2)*n.size(); ++j) {
                if (j%(s+2)==0) c = 0;
                else if (j%(s+2)==s+1) c = 2;
                else c = 1;

                int num = 3*(n[(j/(s+2))]-'0');

                if (j%(s+2)==0 && j!=0) cout << ' ';
                cout << LC[r][c+num];
            }
            cout << '\n';
        }
        cout << '\n';
    }
}