#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string s2;
   s2 = s1;
   reverse(s2.begin(), s2.end());
   int n = s1.size();
   int m = s2.size();
   vector<vector<int>>k(n+1, vector<int>(m+1, 0));
   int maxi = 0;
   int endindex = 0;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(s1[i-1]==s2[j-1]){
            k[i][j] = 1 + k[i-1][j-1];
            int len = k[i][j];
            int start1 = i-len;
            int start2 = n-j;
            if(start1 == start2 && len>maxi){
                maxi = len;
                endindex = i;
            }
        }
        else{
            k[i][j] = 0;
        }
    }
   }
   cout<<s1.substr(endindex-maxi, maxi);
}