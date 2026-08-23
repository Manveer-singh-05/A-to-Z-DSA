#include <bits/stdc++.h>
using namespace std;

class graph {
public:
    vector<vector<int>> adj;

    void adjacencylist(int n, vector<pair<int, int>> edges) {
        adj.resize(n);

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i].first;
            int v = edges[i].second;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    void dfsHelper(int node, vector<bool>& visited, vector<int>& ans) {
        visited[node] = true;
        ans.push_back(node);

        for (int neighbour : adj[node]) {
            if (!visited[neighbour]) {
                dfsHelper(neighbour, visited, ans);
            }
        }
    }

    vector<int> dfs(int start) {
        vector<int> ans;
        vector<bool> visited(adj.size(), false);

        dfsHelper(start, visited, ans);

        return ans;
    }
};

int main() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<pair<int, int>> edges;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        edges.push_back({u, v});
    }

    graph g;

    g.adjacencylist(n, edges);

    vector<int> result = g.dfs(0);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}