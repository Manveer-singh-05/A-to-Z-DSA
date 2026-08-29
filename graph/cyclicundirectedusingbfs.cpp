#include <bits/stdc++.h>
using namespace std;

class graph {
public:
    vector<vector<int>> adj;

    void adjacencylist(int n, int m, vector<pair<int, int>> edges) {
        adj.resize(n);

        for (int i = 0; i < m; i++) {
            int u = edges[i].first;
            int v = edges[i].second;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    bool cycledetection(int node, vector<int>& visited) {

        vector<int> parent(adj.size(), -1);

        visited[node] = true;

        queue<int> ans;
        ans.push(node);

        while (!ans.empty()) {

            int n = ans.front();
            ans.pop();

            for (int neighbour : adj[n]) {

                if (visited[neighbour] && neighbour != parent[n]) {
                    return true;
                }

                else if (!visited[neighbour]) {
                    visited[neighbour] = true;
                    ans.push(neighbour);
                    parent[neighbour] = n;
                }
            }
        }

        return false;
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

    g.adjacencylist(n, m, edges);

    vector<int> visited(n, false);

    for (int i = 0; i < n; i++) {

        if (!visited[i]) {

            if (g.cycledetection(i, visited)) {
                cout << "Cycle exists";
                return 0;
            }
        }
    }

    cout << "No cycle";

    return 0;
}