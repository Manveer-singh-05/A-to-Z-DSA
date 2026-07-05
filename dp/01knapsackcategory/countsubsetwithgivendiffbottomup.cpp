#include <bits/stdc++.h>
using namespace std;
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
    
    for(int x: arr){
        sum+=x;
    }
    int total = sum;

if(total < diff || (total + diff) % 2 != 0){
    cout << 0;
    return 0;
}
    sum = (sum+diff)/2;
    int k[n+1][sum+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0 && j==0){
                k[i][j] = 1;
                continue;
            }
            if(i==0){
                k[i][j] = 0;
                continue;
            }
            if(j==0){
                k[i][j] = 1;
                continue;
            }
            if(arr[i-1]<=j){
                k[i][j]  = k[i-1][j] + k[i-1][j-arr[i-1]];
            }
            else{
                k[i][j] = k[i-1][j];
            }
        }
    }
    cout<<k[n][sum];
}