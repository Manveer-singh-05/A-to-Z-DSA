#include <bits/stdc++.h>
using namespace std;
int lcs(string& s1, string &s2, int n ,int m){
    if(n==0 || m==0){
        return 0;
    }
    else if(s1[n-1]==s2[m-1]){
        return 1+ lcs(s1,s2,n-1,m-1);
    }
    else{
        return max(lcs(s1,s2,n,m-1), lcs(s1,s2,n-1,m));
    }
}
int main(){
    string s1;
    cin>>s1;
    string s2;
    s2 = s1;
    reverse(s2.begin(), s2.end());
    int n = s1.size();
    int m = n;
    int count  = lcs(s1,s2,n,m);
    cout<< n - count;
   
}