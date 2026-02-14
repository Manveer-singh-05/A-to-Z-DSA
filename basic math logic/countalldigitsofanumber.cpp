#include <bits/stdc++.h>
using namespace std;
int main(){
    // basic approach
    // int n;
    // cin>>n;
    // int count =0;
    // if(n==0){
    //     count = 1;
    // }
    // while(n!=0){
    //     count++;
    //     n= n/10;
    // }
    // cout<<count;

    //optimum approach
    int n;
    cin>>n;
    if(n==0){
        cout<<1;
    }
    else{
        int count= floor(log10(n)+1);
        cout<<count;
    }
}