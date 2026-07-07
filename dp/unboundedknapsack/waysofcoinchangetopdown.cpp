#include <bits/stdc++.h>
using namespace std;
int wayscount(int coins[], int n, int amount, vector<vector<int>>&k){
    if(amount==0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    if(k[n][amount]!=-1){
        return k[n][amount];
    }
    else if(coins[n-1]<=amount){
       return k[n][amount] = wayscount(coins,n,amount-coins[n-1],k) + wayscount(coins,n-1,amount,k);
    }
    else{
       return  k[n][amount] = wayscount(coins,n-1,amount,k);
    }
}
int main(){
    int n;
    cin>>n;
    int coins[n];
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int amount;
    cin>>amount;
    vector<vector<int>>k(n+1, vector<int>(amount+1, -1));
    cout<< wayscount(coins,n,amount,k);


}