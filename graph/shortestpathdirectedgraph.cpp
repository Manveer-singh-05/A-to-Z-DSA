#include <bits/stdc++.h>
using namespace std;

class graph {
public:
    vector<vector<pair<int,int>>> adj;

    void adjacancylist(int n, int m, vector<vector<int>> edges) {
        adj.resize(n);

        for (int i = 0; i < m; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];

            adj[u].push_back({v, w});
        }
    }

    // Topological Sort using DFS
    void topoSort(int node, vector<int>& visited, stack<int>& s) {

        visited[node] = 1;

        for (auto it : adj[node]) {

            int neighbour = it.first;

            if (!visited[neighbour]) {
                topoSort(neighbour, visited, s);
            }
        }

        s.push(node);
    }

    void shortestpath(int source) {

        int v = adj.size();

        vector<int> visited(v, 0);
        stack<int> s;

        // Step 1: Topological Sort
        for (int i = 0; i < v; i++) {
            if (!visited[i]) {
                topoSort(i, visited, s);
            }
        }

        // Step 2: Distance array
        vector<int> distance(v, INT_MAX);

        distance[source] = 0;

        // Step 3: Process nodes in topological order
        while (!s.empty()) {

            int top = s.top();
            s.pop();

            if (distance[top] != INT_MAX) {

                for (auto it : adj[top]) {

                    int neighbour = it.first;
                    int weight = it.second;

                    if (distance[top] + weight < distance[neighbour]) {

                        distance[neighbour] =
                            distance[top] + weight;
                    }
                }
            }
        }

        // Print shortest distances
        for (int i = 0; i < v; i++) {

            if (distance[i] == INT_MAX)
                cout << "INF ";
            else
                cout << distance[i] << " ";
        }
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

    int source;
    cin >> source;

    graph g;

    g.adjacancylist(n, m, edges);

    g.shortestpath(source);

    return 0;
}