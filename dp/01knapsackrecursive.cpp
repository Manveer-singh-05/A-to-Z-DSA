#include <bits/stdc++.h>
using namespace std;
int knapsack(int wt[],int val[],int W,int n){
    if(n==0 || W==0) return 0;
    if(wt[n-1]>W) return knapsack(wt,val,W,n-1);
    else return max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
}
int main(){
    int n,W;
    cin>>n>>W;
    int wt[n],val[n];
    for(int i=0;i<n;i++) cin>>wt[i];
    for(int i=0;i<n;i++) cin>>val[i];
    cout<<knapsack(wt,val,W,n);
    return 0;
}