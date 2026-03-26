#include <iostream>
#include <string>
using namespace std;

int main () {
    ios::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin >> tc;
    cin.ignore();

    while (tc--) {
        string s;
        getline (cin, s);
        getline (cin, s);
        int size = s.size();
        int minv = size;

        for (int i = 1; i <= size/2; ++i) {
            if (size % i)
                continue;

            string substr = s.substr (0, i);
            string cmp = "";
            while (cmp.size() != size)
                cmp += substr;

            if (s == cmp) {
                cout << i << '\n';
                minv = i;
                break;
            }
        }

        if (minv == size)
            cout << size << '\n';
        if (tc) cout << '\n';
    }
}