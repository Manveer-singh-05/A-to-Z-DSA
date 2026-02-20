#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int arr1[n]; 
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            if(ans.size()==0 || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else if(arr1[i]>arr2[j]){
            if(ans.size()==0 || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
        else{
            if(ans.size()==0 || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
            j++;
        }
        while(i<n){
            if(ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        while(j<m){
            if(ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
}