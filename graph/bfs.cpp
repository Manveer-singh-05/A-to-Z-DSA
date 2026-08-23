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

    vector<int> bfs(int start) {
        vector<int> ans;
        vector<bool> visited(adj.size(), false);

        queue<int> q;

        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            ans.push_back(node);

            for (int neighbour : adj[node]) {
                if (!visited[neighbour]) {
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }

        return ans;
    }
};

int main() {
    int n;
    cout << "No of nodes: ";
    cin >> n;

    int m;
    cout << "No of edges: ";
    cin >> m;

    vector<pair<int, int>> edges;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        edges.push_back({u, v});
    }

    graph g;

    g.adjacencylist(n, edges);

    vector<int> result = g.bfs(0);

    cout << "BFS: ";

    for (int node : result) {
        cout << node << " ";
    }

    return 0;
}