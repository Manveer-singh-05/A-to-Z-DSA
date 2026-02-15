#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(int i = 3; i*i <= n; i += 2){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    // optimal approach 
    // int n;
    // cin>>n;
    // bool isPrime=true;
    // if(n<=1){
    //     cout<<"Not Prime";
    //     return 0;
    // }
    // for(int i=2;i*i<=n;i++){
    //     if(n%i==0){
    //         isPrime=false;
    //         cout<<"Not Prime";
    //         return 0;
    //     }
    // }
    // if(isPrime){
    //     cout<<"Prime";
    // }

    //most optimal approach 
    int n;
    cin>>n;
    isPrime(n) ? cout<<"Prime" : cout<<"Not Prime";

}