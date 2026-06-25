#include <bits/stdc++.h>
using namespace std;
int iscount(int arr[], int n, int target, vector<vector<int>>&t){
     if(target ==0){
         return 1;
     }
    if(n==0){
        return 0;
    }
    if(t[n][target]!=-1){
        return t[n][target];
    }
    else if(arr[n-1]<=target){
        return t[n][target] = iscount(arr,n-1, target-arr[n-1],t) + iscount(arr,n-1,target,t);
    }
    else{
        return t[n][target] = iscount(arr,n-1, target, t);
    }
 }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    vector<vector<int>>t(n+1, vector<int>(target+1,-1));
   cout<< iscount(arr,n,target,t);
}