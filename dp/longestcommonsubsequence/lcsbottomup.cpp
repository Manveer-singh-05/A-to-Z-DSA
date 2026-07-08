#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int n = s.size();
    int m = t.size();
    vector<vector<int>>k(n+1, vector<int>(m+1, 0));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0){
                k[i][j] = 0;
                continue;
            }
            if(j==0){
                k[i][j] = 0;
                continue;
            }
            if(s[i-1]==t[j-1]){
                k[i][j] = 1 + k[i-1][j-1];
            }
            else{
                k[i][j] = max(k[i-1][j], k[i][j-1]);
            }
        }
    }
    cout<<k[n][m];
}