#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int slow =0;
    int fast = 0 ;
    do{
        slow=v[slow];
        fast=v[v[fast]];
    }while(slow!=fast);
    slow =0;
    while(slow!=fast){
        slow=v[slow];
        fast=v[fast];
    }
    cout<<slow;
}