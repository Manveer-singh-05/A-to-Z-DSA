#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n && !(n & (n - 1))){
        cout<<"Yes, it is a power of 2."<<endl;
    }
    else{
        cout<<"No, it is not a power of 2."<<endl;
    }
}