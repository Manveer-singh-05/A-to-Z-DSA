#include <bits/stdc++.h>
using namespace std;
int main(){
    // brute force
    // int n;
    // cin>>n;
    // vector<int> divisors;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         divisors.push_back(i);
    //     }
    // }
    // for(auto it: divisors){
    //     cout<<it<<" ";
    // }

    //optimal approach
    int n;
    cin>>n;
    vector<int> divisors;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i!=n/i){
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    for(auto it: divisors){
        cout<<it<<" ";
    }
}