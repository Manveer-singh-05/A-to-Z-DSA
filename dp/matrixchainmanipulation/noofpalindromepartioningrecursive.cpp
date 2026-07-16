#include <bits/stdc++.h>
using namespace std;
int ispalindrome(string &s, int i ,int j){
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int noofparition(string &s, int i, int j){
    if(i>=j){
        return 0;
    }
    if(ispalindrome(s,i,j)) return 0;
    int mini  = INT_MAX;
    for(int k=i; k<j;k++){
        int temp = noofparition(s,i,k) + noofparition(s,k+1,j) + 1;
        mini  = min(temp,mini);
    }
    return mini;
    
}
int main(){
    string s;
    cin>>s;
    int n = s.size();
    int i  =0;
    int j = n-1;
     cout<< noofparition(s,i,j);
}