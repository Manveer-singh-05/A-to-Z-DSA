#include <bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int val[], int W, int n, vector<vector<int>> &dp){
    
    if(n==0 || W==0) return 0;
    
    if(dp[n][W] != -1) return dp[n][W];
    
    if(wt[n-1] > W)
        return dp[n][W] = knapsack(wt,val,W,n-1,dp);
        
    else
        return dp[n][W] = max(
            val[n-1] + knapsack(wt,val,W-wt[n-1],n-1,dp),
            knapsack(wt,val,W,n-1,dp)
        );
}

int main(){
    
    int n,W;
    cin>>n>>W;
    
    int wt[n];
    int val[n];
    
    for(int i=0;i<n;i++) cin>>wt[i];
    for(int i=0;i<n;i++) cin>>val[i];
    
    vector<vector<int>> dp(n+1, vector<int>(W+1,-1));
    
    cout<<knapsack(wt,val,W,n,dp)<<endl;
    
    return 0;
}