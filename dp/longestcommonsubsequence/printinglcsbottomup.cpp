#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>>k(n+1, vector<int>(m+1, 0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                k[i][j] = 1+ k[i-1][j-1];
            }
            else{
                k[i][j] = max(k[i-1][j], k[i][j-1]);
            }
        }
    }

    string ans = "";
    int i= n;
    int j = m;
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            ans+=s1[i-1];
            i--;
            j--;
        }
        else{
            if(k[i-1][j]>k[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}