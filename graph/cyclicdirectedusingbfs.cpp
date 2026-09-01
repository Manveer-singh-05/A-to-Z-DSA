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
    bool checkcycle(){
        int v = adj.size();
        vector<int>ans(v,0);
        for(int i=0;i<v;i++){
            for(auto it: adj[i]){
                ans[it]++;
            }
        }
        queue<int>q;
        int count = 0 ;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int front = q.front();
            q.pop();
            count++;
            for(auto it : adj[front]){
                ans[it]--;
                if(ans[it]==0){
                    q.push(it);

                }
            }
        }
        if(count==v){
            return false;
        }
        else{
            return true;
        }
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
    if(g.checkcycle()){
        cout << "Cycle exists";
    }
    else{
        cout << "No cycle";
    }

}