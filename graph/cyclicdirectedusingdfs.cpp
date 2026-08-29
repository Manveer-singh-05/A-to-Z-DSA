#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    vector<vector<int>>adj;
    void adjacancylist(int n, int m, vector<pair<int,int>>edges){
        adj.resize(n);
        for(int i=0;i<m;i++){
            int u = edges[i].first;
            int v = edges[i].second;
            adj[u].push_back(v);
        }
    }
    bool checkcycle(int n, vector<int>&visited, vector<int>&dfsvisit){
        visited[n]=  true;
        dfsvisit[n] = true;
        for(auto it: adj[n]){
            if(visited[it] && dfsvisit[it]){
                return true;
            }
            else if(!visited[it]){
                if(checkcycle(it,visited,dfsvisit)){
                    return true;
                }
            }
        }
        dfsvisit[n] =false;
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
    g.adjacancylist(n,m,edges);
    vector<int>visited(n, false);
    vector<int>dfsvisit(n,false);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            bool check = g.checkcycle(i,visited,dfsvisit);
            if(check){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"No";

}