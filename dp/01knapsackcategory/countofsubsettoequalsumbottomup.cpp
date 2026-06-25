#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum ;
    cin>>sum;
    int t[n+1][sum+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0 && j==0){
                t[i][j] =1;
                continue;
            }
            if(i==0){
                t[i][j] = 0;
                continue;
            }
            if(j==0){
                t[i][j] = 1;
                continue; 
            }
            if(arr[i-1]<=j){
                t[i][j] = t[i-1][j] + t[i-1] [j - arr[i-1]];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    cout<<t[n][sum];
}