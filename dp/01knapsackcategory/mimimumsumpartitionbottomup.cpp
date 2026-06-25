#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int range= 0;
    for(int x :arr){
        range +=x;
    }
    vector<vector<int>>t(n+1, vector<int>(range+1, 0));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=range;j++){
            if(i==0 && j==0){
                t[i][j] =1;
                continue;
            }
            if(i==0 ){
                t[i][j] = 0;
                continue;
            }
            if(j==0){
                t[i][j] =1;
                continue;
            }
            if(arr[i-1]<=j){
                t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
            }
            else{
                t[i][j]= t[i-1][j];
            }
        }
    }
    vector<int>ans;
    for(int i=0;i<=range/2;i++){
        if(t[n][i]){
            ans.push_back(i);
        }
    }
    int mini = INT_MAX;
    for(int i=0; i<ans.size();i++){
        mini = min(mini, range- 2* ans[i]);
    }
    cout<<mini;
}