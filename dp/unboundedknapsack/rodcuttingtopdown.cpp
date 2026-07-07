#include <bits/stdc++.h>
using namespace std;
int rodcuttingmax(int prices[], int arr[], int n, int w, vector<vector<int>>&k){
    if(n==0){
        return 0;
    }
    if(w==0){
        return 0;
    }
    if(k[n][w]!=-1){
        return k[n][w];
    }
    else if(arr[n-1]<=w){
        return k[n][w] = max(prices[n-1]+ rodcuttingmax(prices,arr,n,w-arr[n-1],k), rodcuttingmax(prices,arr,n-1,w,k));
    }
    else{
        return k[n][w] = rodcuttingmax(prices,arr,n-1,w,k);
    }
}
int main(){
    int n;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int w = n;
    int arr[w];
    for(int i=0;i<w;i++){
        arr[i]  = i+1;
    }
    vector<vector<int>>k(n+1, vector<int>(w+1, -1));
    cout<<rodcuttingmax(prices,arr,n,w,k);

}