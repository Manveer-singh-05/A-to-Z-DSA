#include <bits/stdc++.h>
using namespace std;
 string printlcs(string &s1, string &s2, int n ,int m){
    if(n==0 || m==0){
        return "";
    }
    if(s1[n-1]==s2[m-1]){
        return printlcs(s1,s2,n-1,m-1) + s1[n-1];
    }
    else{
        string a = printlcs(s1,s2,n-1,m);
        string b = printlcs(s1,s2,n,m-1);
        return (a.size()>b.size()? a: b);
    }

 }
int main(){
    string s1, s2;
    cin>>s1>>s2;
    int n = s1.size();
    int m = s2.size();
   cout<< printlcs(s1,s2,n,m);
}