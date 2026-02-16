#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int count =0;
    for(int i=0;i<k;i++){
        if(s[i]=='B'){
            count++;
        }
    }
    if(count==k){
        cout<<0;
        return 0;
    }
    int maxcount = count;
    for(int i=k;i<s.size();i++){
        if(s[i]=='B'){
            count++;
        }
        if(s[i-k]=='B'){
            count--;
        }
        maxcount = max(maxcount,count);
        if(maxcount==k){
            cout<<0;
            return 0;
        }
    }
    cout<<k-maxcount;

}