#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int x: arr){
        sum+=x;
    }
    if(sum%2) {
        cout<< "No"; 

        return 0;
    }
    int s = sum/2;
   int  k[n+1][s+1];
   for(int i=0;i<=n;i++){
    for(int j=0;j<=s;j++){
        if(i==0 && j==0){
            k[i][j]=1;
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
        if(arr[i-1]>j){
            k[i][j] = k[i-1][j];
        }
        else {
            k[i][j] = k[i-1][j] || k[i-1][j-arr[i-1]];
        }
    }
   }
   cout<<(k[n][s]? "Yes": "No")<<endl;

}