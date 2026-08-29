#include <bits/stdc++.h>
using namespace std;

class graph{
public:
    vector<vector<int>> adj;

    void adjacancylist(int n, int m, vector<pair<int,int>> edges){
        adj.resize(n);

        for(int i = 0; i < m; i++){
            int u = edges[i].first;
            int v = edges[i].second;

            adj[u].push_back(v);
        }
    }

    void topsort(int node, vector<int>& visited, stack<int>& s){
        visited[node] = true;

        for(auto it : adj[node]){
            if(!visited[it]){
                topsort(it, visited, s);
            }
        }

        s.push(node);
    }
};

int main(){
    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<pair<int,int>> edges;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    graph g;

    g.adjacancylist(n, m, edges);

    vector<int> visited(n, false);
    stack<int> s;

    for(int i = 0; i < n; i++){
        if(!visited[i]){
            g.topsort(i, visited, s);
        }
    }

    vector<int> ans;

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    for(int x : ans){
        cout << x << " ";
    }
}