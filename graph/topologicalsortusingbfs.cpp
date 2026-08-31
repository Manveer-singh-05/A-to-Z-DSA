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
        }
    }

    vector<int> topologicalsort() {
        int v = adj.size();

        vector<int> indexes(v, 0);

        // Calculate indegree
        for (int i = 0; i < v; i++) {
            for (auto it : adj[i]) {
                indexes[it]++;
            }
        }

        vector<int> ans;
        queue<int> q;

        for (int i = 0; i < indexes.size(); i++) {
            if (indexes[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int front = q.front();
            q.pop();

            ans.push_back(front);

            for (auto it : adj[front]) {
                indexes[it]--;

                if (indexes[it] == 0) {
                    q.push(it);
                }
            }
        }

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

    g.adjacancylist(n, m, edges);

    vector<int> ans = g.topologicalsort();

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}