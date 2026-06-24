#include <bits/stdc++.h>
using namespace std;
 bool isSubset(vector<int>&arr, int sum, int n, vector<vector<int>>&k){
    if(sum==0){
        return true;
    }
    if(n==0){
        return false;
    }
    if(k[n][sum]!=-1){
        return k[n][sum];
    }
    else if(arr[n-1]<=sum){
       return  k[n][sum] = isSubset(arr, sum - arr[n-1], n-1,k) || isSubset(arr, sum, n-1,k);
    }
    else {
        return k[n][sum]=  isSubset(arr, sum, n-1,k);
    }
 }
int main(){

    int n, sum;
    cin>>n>>sum;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>k ( n+1 , vector<int>(sum+1, -1));
   
    bool ans = isSubset(arr,sum,n,k);
    cout<<(ans? "No" : "yes");

}