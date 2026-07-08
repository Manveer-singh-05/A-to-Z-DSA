#include <bits/stdc++.h>
using namespace std;
int lcs(string &s, string&t, int n, int m, vector<vector<int>>&k){
    if(n==0 || m==0){
        return 0;
    }
    if(k[n][m]!=-1){
        return k[n][m];
    }
    if(s[n-1]==t[m-1]){
        k[n][m] = 1+lcs(s,t,n-1,m-1,k);
    }
    else{
        k[n][m] = max(lcs(s,t,n-1,m,k), lcs(s,t,n,m-1,k));
    }
}
int main(){
    string s,t;
    cin>>s>>t;
    int n= s.size();
    int m = t.size();
    vector<vector<int>>k(n+1, vector<int>(m+1, -1));
    cout<<lcs(s,t,n,m,k);
}