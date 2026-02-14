#include <bits/stdc++.h>
using namespace std;
// optimal approach
// int gcd(int a, int b){
//     if(b==0){
//         return a;
//     }
//     return gcd(b,a%b);
// }

//brute force approach
int brutegcd(int a, int b){
    int gcd =1;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            gcd =i;
        }
    }
    return gcd;
}
int main(){
    int a,b;
    cin>>a>>b;
    // cout<<gcd(a,b);
    cout<<brutegcd(a,b);

}