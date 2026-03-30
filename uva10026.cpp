#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct task {
    int time, fine, order;

    task () {}
    task (int t, int f, int o) {
        time = t;
        fine = f;
        order = o;
    }
};

bool cmp (task &a, task &b) {
    return a.time * b.fine < b.time * a.fine;
}

int main () {
    ios::sync_with_stdio(0); cin.tie(0);

    int tc;
    cin >> tc;
    bool first = 1;
    while (tc--) {
        int N;
        cin >> N;
        vector <task> tasks (N);
        int t, f;
        for (int i = 0; i < N; ++i) {
            cin >> t >> f;
            tasks[i] = task (t, f, i+1);
        }

        sort (tasks.begin(), tasks.end(), cmp);
        if (!first) cout << '\n';
        else first = 0;
        for (int i = 0; i < N; ++i)
            cout << tasks[i].order << ((i == N-1)? '\n': ' ');
    }
}