#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int sizex, sizey, x, y, oidx;
    char ori;
    string mov;
    vector <char> O {'E', 'S', 'W', 'N'};
    vector <pair<int, int>> scent;

    cin >> sizex >> sizey;
    while (cin >> x >> y >> ori >> mov) {
        for (int i = 0; i < 4; ++i) {
            if (ori == O[i]) {
                oidx = i;
                break;
            }
        }

        bool lost = 0;
        for (int i = 0; i < mov.size(); ++i) {
            if (mov[i] == 'L') oidx = (oidx-1+4) % 4;
            else if (mov [i] == 'R') oidx = (oidx+1) % 4;
            else if (mov[i] == 'F') {
                bool s = 0;
                pair<int, int> p;
                if (oidx == 0) p = make_pair(x+1, y);
                else if (oidx == 1) p = make_pair(x, y-1);
                else if (oidx == 2) p = make_pair(x-1, y);
                else if (oidx == 3) p = make_pair(x, y+1);
                for (int i = 0; i < scent.size(); ++i) {
                    if (p.first >= 0 && p.first <= sizex && p.second >= 0 && p.second <= sizey) break;
                    if (make_pair(x, y) == scent[i]) {
                        s = 1;
                        break;
                    }
                }
                if (s == 1) continue;

                if (oidx == 0) ++x;
                else if (oidx == 1) --y;
                else if (oidx == 2) --x;
                else if (oidx == 3) ++y;
            }

            if (x > sizex) {
                lost = 1;
                x = sizex;
                scent.emplace_back(x, y);
                break;
            }
            if (x < 0) {
                lost = 1;
                x = 0;
                scent.emplace_back(x, y);
                break;
            }
            if (y > sizey) {
                lost = 1;
                y = sizey;
                scent.emplace_back(x, y);
                break;
            }
            if (y < 0) {
                lost = 1;
                y = 0;
                scent.emplace_back(x, y);
                break;
            }
        }

        cout << x << ' ' << y << ' ' << O[oidx] << ((lost)? " LOST": "") << '\n';
    }
}
