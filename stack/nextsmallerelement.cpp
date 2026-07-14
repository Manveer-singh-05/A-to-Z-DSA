#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans(n);
    stack<int>st;
    for(int i=n-1; i>=0;i--){
        while(!st.empty() && arr[i]<=st.top()){
            st.pop();
        }
        if(st.empty()){
            ans[i]  =-1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    for(int x: ans){
        cout<<x<<" ";
    }
}