#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int w = n; // because it mentioned in the question n  =size of price
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]  =i+1;
    }
    vector<vector<int>>k(n+1, vector<int>(w+1, 0));
    for(int i=0; i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0){
                k[i][j] = 0;
                continue;
            }
            if(j==0){
                k[i][j] = 0;
                continue;
            }
            if(arr[i-1]<=j){
                k[i][j] = max(prices[i-1]+k[i][j-arr[i-1]], k[i-1][j]);
            }
            else{
                k[i][j] = k[i-1][j];
            }
        }

    }
    cout<<k[n][w];
}