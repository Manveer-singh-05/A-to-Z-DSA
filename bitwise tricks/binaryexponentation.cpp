#include <bits/stdc++.h>
using namespace std;

long long power(int n, int l){
    long long ans =1;
    while(l>0){
        if(l%2){
            ans = ans*n;
        }
        n = n*n;
        l = l/2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int l;
    cin>>l;
    cout<<power(n,l)<<endl;
}