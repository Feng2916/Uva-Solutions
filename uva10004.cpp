#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef vector <int> vi;

int main () {
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    while (cin >> n && n) {
        vector <vi> adj (n, vi (n, 0));
        int l, u, v;
        cin >> l;
        while (l--) {
            cin >> u >> v;
            adj[u][v] = 1;
            adj[v][u] = 1;
        }

        vi visited (n, 0);
        queue <int> q;
        q.push(u);
        visited[u] = 2;
        bool bicolorable = 1;

        while (!q.empty() && bicolorable) {
            int u = q.front();
            q.pop();

            for (int j = 0; j < n; ++j) {
                if (adj[u][j]) {
                    if (!visited[j]) {
                        visited[j] = (visited[u]%2)? 2: 3;
                        q.push(j);
                    }
                    else if (visited[j] == visited[u]) {
                        bicolorable = 0;
                        break;
                    }
                }
            }
        }

        cout << ((bicolorable)? "BICOLORABLE.\n": "NOT BICOLORABLE.\n");
    }
}