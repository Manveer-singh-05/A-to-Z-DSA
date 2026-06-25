#include <bits/stdc++.h>
using namespace std;
    int issubset(int arr[], int n, int range, vector<vector<int>>&t){
        if(range==0){
            return t[n][range] = 1;
        }
        if(n==0){
             return t[n][range] = 0;
        }
        if(t[n][range]!=-1){
            return t[n][range];
        }
        else if(arr[n-1]<=range){
            return t[n][range] = issubset(arr,n-1, range - arr[n-1], t) || issubset(arr,n-1, range, t);
        }
        else{
            return t[n][range] = issubset(arr,n-1,range, t);
        }
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int range =0;
    for(int x :arr){
        range +=x;
    }
    vector<vector<int>>t(n+1, vector<int>(range+1, -1));
    
    vector<int>ans;
    for(int i=0;i<=range/2;i++){
      issubset(arr,n, i,t);
    }
    int mini = INT_MAX;
   for(int i = 0; i <= range/2; i++){
        if(t[n][i] == 1){
            mini = min(mini, range - 2*i);
        }
    }
    cout<<mini;
}