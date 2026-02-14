#include <bits/stdc++.h>
using namespace std;
int main(){
    // brute force
    int n;
    cin>>n;
    vector<int> divisors;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
        }
    }
    for(auto it: divisors){
        cout<<it<<" ";
    }
}