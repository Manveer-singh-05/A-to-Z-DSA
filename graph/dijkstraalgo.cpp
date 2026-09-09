#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    vector<vector<pair<int, int>>> adj;

    void adjacencyList(int n, int m, vector<vector<int>>& edges) {
        adj.resize(n);

        for (int i = 0; i < m; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];

            // Undirected graph
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
    }

    vector<int> dijkstra(int n, int src) {
        vector<int> dist(n, INT_MAX);

        // {distance, node}
        set<pair<int, int>> st;

        dist[src] = 0;
        st.insert({0, src});

        while (!st.empty()) {
            auto it = st.begin();

            int distance = it->first;
            int node = it->second;

            st.erase(it);

            for (auto edge : adj[node]) {
                int neighbour = edge.first;
                int weight = edge.second;

                // Relaxation
                if (distance + weight < dist[neighbour]) {

                    // Remove old pair if it exists
                    if (dist[neighbour] != INT_MAX) {
                        st.erase({dist[neighbour], neighbour});
                    }

                    dist[neighbour] = distance + weight;

                    // Insert new shortest distance
                    st.insert({dist[neighbour], neighbour});
                }
            }
        }

        return dist;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> edges;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        edges.push_back({u, v, w});
    }

    Graph g;

    g.adjacencyList(n, m, edges);

    int src;
    cin >> src;

    vector<int> dist = g.dijkstra(n, src);

    for (int i = 0; i < n; i++) {
        if (dist[i] == INT_MAX)
            cout << "INF ";
        else
            cout << dist[i] << " ";
    }

    return 0;
}