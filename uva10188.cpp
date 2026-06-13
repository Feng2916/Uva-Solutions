#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define vc vector <char>

int main () {
    cin.tie(0)->sync_with_stdio(0);
    // freopen ("in.txt", "r", stdin);

    int n, m, t = 1;
    while (1) {
        if (cin >> n && n) {
            cout << "Run #" << t++ << ": ";

            string sol = "", ans = "", s, a;
            vc numOfSol, numOfAns;

            cin.ignore ();
            for (int i = 0; i < n; ++i) {
                getline (cin, s);
                sol += s+'|';
            }

            cin >> m;
            cin.ignore ();
            for (int i = 0; i < m; ++i) {
                getline (cin, a);
                ans += a+'|';
            }

            if (sol == ans && n == m) {
                cout << "Accepted\n";
                continue;
            }

            for (char c: sol) {
                if (isdigit (c)) {
                    numOfSol.emplace_back (c);
                }
            }

            for (char c: ans) {
                if (isdigit (c)) {
                    numOfAns.emplace_back (c);
                }
            }

            cout << ((numOfSol == numOfAns)? "Presentation Error\n": "Wrong Answer\n");
        }
        else {
            break;
        }
    }
}