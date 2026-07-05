#include <bits/stdc++.h>
using namespace std;
int countsubset(int arr[], int n, int sum, vector<vector<int>>&k){
    if(sum==0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    if(k[n][sum]!=-1){
        return k[n][sum];
    }
    else if(arr[n-1]<=sum){
      return  k[n][sum] = countsubset(arr,n-1,sum,k)+ countsubset(arr,n-1,sum-arr[n-1],k);
    }
    else{ 
        return k[n][sum] = countsubset(arr,n-1,sum,k);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int diff ;
    cin>>diff;
    int sum = 0;
    for(int x : arr){
        sum+=x;
    }
    if(sum<diff || (sum+diff)%2!=0){
        cout<<0;
        return 0;
    }
    sum = (sum + diff)/2;
    vector<vector<int>>k(n+1,vector<int>(sum+1,-1));
    cout<<countsubset(arr,n,sum,k);
}