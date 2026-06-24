#include <bits/stdc++.h>
using namespace std;
 int ispartition(int arr[], int n, int s, vector<vector<int>>&t){
     if(s==0){
         return 1;
     }
    if(n==0){
        return 0;
    }
    if(t[n][s]!=-1){
        return t[n][s];
    }
    else if(arr[n-1]>s){
        return t[n][s] = ispartition(arr,n-1, s,t);
    }
    else{
        return t[n][s] = ispartition(arr,n-1, s-arr[n-1], t) || ispartition(arr,n-1, s, t);
    }
 }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int x : arr){
        sum += x;

    }
    if(sum%2!=0){
        cout<<"No"<<endl;
        return 0;
    }
    int s = sum/2;
    vector<vector<int>>t(n+1, vector<int>(s+1, -1));
    bool ans = ispartition(arr,n,s, t);
    cout<<(ans?"Yes":"No");
}