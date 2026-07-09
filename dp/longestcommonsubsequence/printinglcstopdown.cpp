#include <bits/stdc++.h>
using namespace std;
int lcs(string &s1, string &s2, int n, int m, vector<vector<int>>&k){
    if(n==0 || m ==0){
        return 0;
    }
    if(k[n][m]!=-1){
        return k[n][m];
    }
    else if(s1[n-1]==s2[m-1]){
        return k[n][m] = 1 + lcs(s1,s2,n-1,m-1,k);
    }
    else{
        return k[n][m] = max(lcs(s1,s2,n,m-1,k), lcs(s1,s2,n-1,m,k));
    }

}
void print(string &s1, string &s2, int n, int m, vector<vector<int>>&k, string &ans){
    if(n==0 || m == 0){
        return ;
    }
    if(s1[n-1]==s2[m-1]){
        print(s1,s2,n-1,m-1,k,ans);
        ans += s1[n-1];
    }
    else{
        if(k[n-1][m]>k[n][m-1]){
            print(s1,s2,n-1,m,k,ans);
        }
        else{
            print(s1,s2,n,m-1,k,ans);
        }
    }
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>>k(n+1, vector<int>(m+1, -1));
    string ans  ="";
    lcs(s1,s2,n,m,k);
    print(s1,s2,n,m,k,ans);
    cout<<ans;
}