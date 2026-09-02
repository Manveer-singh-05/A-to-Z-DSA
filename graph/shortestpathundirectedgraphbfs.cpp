#include <bits/stdc++.h>
using namespace std;

class graph {
public:
    vector<vector<int>> adj;

    void adjacancylist(int n, int m, vector<pair<int, int>> edges) {
        adj.resize(n);

        for (int i = 0; i < m; i++) {
            int u = edges[i].first;
            int v = edges[i].second;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    vector<int> shortestpath(int starting, int ending) {
        int v = adj.size();

        vector<int> parent(v, -1);
        vector<int> visited(v, 0);

        queue<int> q;

        visited[starting] = 1;
        q.push(starting);

        while (!q.empty()) {
            int front = q.front();
            q.pop();

            for (auto it : adj[front]) {
                if (!visited[it]) {
                    visited[it] = 1;
                    parent[it] = front;
                    q.push(it);
                }
            }
        }

        vector<int> ans;

        if (!visited[ending]) {
            return ans;   
        }

        int currentnode = ending;

        while (currentnode != -1) {
            ans.push_back(currentnode);
            currentnode = parent[currentnode];
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> edges;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    int starting, ending;
    cin >> starting >> ending;

    graph g;

    g.adjacancylist(n, m, edges);

    vector<int> ans = g.shortestpath(starting, ending);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}