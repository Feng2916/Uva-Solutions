#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define vs vector <string>

int main () {
    cin.tie(0)->sync_with_stdio(0);
    // freopen ("in.txt", "r", stdin);

    int G;
    while (cin >> G && G) {
        string str;

        cin.ignore ();
        getline (cin, str);

        vs substring (G);
        for (int i = 0; i < G; ++i) {
            substring[i] = str.substr ((str.size()/G)*i, str.size()/G);
        }

        for (string s: substring) {
            reverse (s.begin(), s.end());
            cout << s;
        }

        cout << '\n';
    }
}