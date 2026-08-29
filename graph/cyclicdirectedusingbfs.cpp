#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    vector<vector<int>>adj;
    void adjacancylist(int n, int m, vector<pair<int,int>>edges){
        adj.resize(n);
        for(int i=0;i<m;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }
    }
    bool checkcycle(int )
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
    g.adjacancylist(n,m,edges);
    

}