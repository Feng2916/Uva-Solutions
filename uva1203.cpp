#include <bits/stdc++.h>
using namespace std;

bool cmp (pair <int, int> &a, pair <int, int> &b) {
    if (a.first != b.first) return a.first < b.first;
    return a.second < b.second;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string reg;
    vector <pair<int, int>> data;
    map <int, int> origin;
    int d1, d2;
    while (cin >> reg && reg != "#") {
        cin >> d1 >> d2;
        data.emplace_back(d2, d1);
        origin[d1] = d2;
    }

    int times;
    cin >> times;
    while (times) {
        sort (data.begin(), data.end(), cmp);
        cout << data[0].second << '\n';;
        data[0].first = (data[0].first/origin[data[0].second]+1)*origin[data[0].second];
        --times;
    }
}