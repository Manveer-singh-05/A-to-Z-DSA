#include <bits/stdc++.h>
using namespace std;
int lcs(string &s, string &t, int n ,int m){
    if(m==0 || n ==0){
        return 0;
    }
   
    else if(s[n-1]==t[m-1]){
        return  1 + lcs(s,t,n-1,m-1);
    }
    else{
      return  max(lcs(s,t,n-1,m), lcs(s,t,n,m-1));
    }
}
int main(){
    string s, t;
    cin>>s>>t;
    int n = s.size();
    int m = t.size();

    int l =lcs(s,t,n,m);
    cout<<(l==n)? "Ture" : "False";

}