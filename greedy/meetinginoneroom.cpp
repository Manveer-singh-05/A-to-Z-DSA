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

    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({end[i],start[i]});
    }
    sort(v.begin(),v.end());
    int count = 1;
    int endpoint = v[0].first;
    for(int i=1;i<n;i++){
        if(v[i].second>=endpoint){
            count++;
            endpoint = v[i].first;
        }
    }
    cout<<count<<endl;

}