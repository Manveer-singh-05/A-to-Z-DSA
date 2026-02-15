#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isPrime=true;
    if(n<=1){
        cout<<"Not Prime";
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime=false;
            cout<<"Not Prime";
            return 0;
        }
    }
    if(isPrime){
        cout<<"Prime";
    }

}