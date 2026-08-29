#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    vector<vector<int>>adj;
    void adjacencylist(int n, int m, vector<pair<int,int>>edges){
        adj.resize(n);
        for(int i=0;i<m;i++){
            int u = edges[i].first;
            int v = edges[i].second;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    bool checkcycle(int node, int parent,vector<int>&visited){
        visited[node] = true;
        for(auto neighbour: adj[node]){
            if(visited[neighbour] && neighbour !=parent){
                return true;
            }
            else if(!visited[neighbour]){
                if(checkcycle(neighbour,node,visited)){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<pair<int,int>>edges;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        edges.push_back({u,v});
    }
    graph g;
    g.adjacencylist(n,m,edges);
    vector<int>visited(n,false);
     for(int i=0;i<n;i++){
        if(!visited[i]){
            if(g.checkcycle(i,-1,visited)){
                cout<<"cycle exist";
                return 0;
            }
        }
    }
    cout<<"No cycle";
}