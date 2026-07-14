#include <bits/stdc++.h>
using namespace std;
int mcm(int arr[], int n, int m, vector<vector<int>>&t){
    if(n>=m){
        return 0;
    }
    if(t[n][m]!=-1){
        return t[n][m];
    }
    int mini = INT_MAX;
    for(int k= n; k<m;k++){
        int temp  = mcm(arr,n,k,t) + mcm(arr,k+1,m,t) + arr[n-1] * arr[k] * arr[m];
        mini = min(mini, temp);
    }
    return t[n][m] = mini;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>t(n+1, vector<int>(n+1, -1));
    int i = 1;
    int j = n-1;
    cout << mcm(arr,i,j,t);
}
