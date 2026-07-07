#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int coins[n];
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int amount ;
    cin>>amount;
    vector<vector<int>>k(n+1, vector<int>(amount+1, 0));
    for(int i=0;i<=n;i++){
        k[i][0] =1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(coins[i-1]<=j){
                k[i][j] = k[i-1][j] + k[i][j-coins[i-1]];
            }
            else{
                k[i][j] = k[i-1][j];
            }
        }
    }
    cout<<k[n][amount];
}