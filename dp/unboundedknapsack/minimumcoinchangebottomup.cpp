#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int amount ;
    cin>>amount;
    const int INF = INT_MAX-1; // we initiaize it becuase if the wight is 1 and the beg is empty how do we know how many minimum coins were be needed so we can decide that why we assume it infinite mathematically so that why we take INT_MAX-1 
    vector<vector<int>>k(n+1, vector<int>(amount+1, INF));
    for(int i=0;i<=n;i++){
        k[i][0] = 0;
    }
    for(int j=1;j<=amount;j++){
        k[0][j] = INF;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(prices[i-1]<=j){
                k[i][j] = min(k[i-1][j], 1+k[i][j-prices[i-1]]);
            }
            else{
                k[i][j] = k[i-1][j];
            }
        }
    }
    if(k[n][amount]==INF){
        cout<< -1;
    }
    else{

        cout<< k[n][amount];
    }
}