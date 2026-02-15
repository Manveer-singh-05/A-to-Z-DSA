#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string &s, int i, int n){
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-1-i]){
        return false;
    }
    return ispalindrome(s, i+1, n);
}
int main(){
    string s; 
    cin >>s;
    int n = s.size();
    ispalindrome(s, 0, n) ? cout<<"Yes" : cout<<"No";
    return 0;
    
}