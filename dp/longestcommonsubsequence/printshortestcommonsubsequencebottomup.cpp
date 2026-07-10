#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>>k(n+1, vector<int>(m+1, 0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                k[i][j] = 1 +k[i-1][j-1];
            }
            else{
                k[i][j] = max(k[i-1][j], k[i][j-1]);
            }
        }
    }
    int i= n;
    int j = m;
    string ans = "";
    while(i>0 && j>0){
        if(s1[i-1]== s2[j-1]){
            ans+=s1[i-1];
            i--;
            j--;
        }
        else if(k[i-1][j]>k[i][j-1]){
            ans+=s1[i-1];
            i--;
        }
        else{
            ans+=s2[j-1];
            j--;
        }
    }
    while(i>0){
        ans+=s1[i-1];
        i--;
    }
    while(j>0){
        ans+=s2[j-1];
        j--;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}