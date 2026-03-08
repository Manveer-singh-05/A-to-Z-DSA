#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans="";
    int arr[256]={0};
    for(char c:s){
        if(!arr[c]){
            ans+=c;
            arr[c]=1;
        }
    }
    cout<<ans;
}