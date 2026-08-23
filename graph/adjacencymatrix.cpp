#include <bits/stdc++.h>
using namespace std;

class graph {
public:
    vector<vector<int>> printadjlist(int n, int m, vector<pair<int,int>> edges) {
        vector<vector<int>> adj(n);

        for(int i = 0; i < m; i++) {
            int u = edges[i].first;
            int v = edges[i].second;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        return adj;
    }
};

int main() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<pair<int,int>> edges;

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    graph g;
    vector<vector<int>> adj = g.printadjlist(n, m, edges);

    for(int i = 0; i < n; i++) {
        cout << i << " -> ";

        for(int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }

        cout << endl;
    }
}