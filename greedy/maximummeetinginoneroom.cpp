#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int start[n];
    for(int i=0;i<n;i++){
        cin>>start[i];
    }
    int end[n];
    for(int i=0;i<n;i++){
        cin>>end[i];
    }
    vector<pair<pair<int,int>,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({{end[i],start[i]},i+1});
    }
    sort(v.begin(),v.end());
    int last = v[0].first.first;
    vector<int>ans;
    ans.push_back(v[0].second);
    for(int i=1;i<n;i++){
        if(v[i].first.second>last){
            ans.push_back(v[i].second);
            last = v[i].first.first;
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}