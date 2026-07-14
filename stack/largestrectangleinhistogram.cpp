#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int>st;
    vector<int>prevsmall(n);
    vector<int>nextsmall(n);
    for(int i=0; i <n;i++){
        while(!st.empty()  && arr[st.top()]>= arr[i]){
            st.pop();
        }
        if(st.empty()){
            prevsmall[i] = -1;
        }
        else{
            prevsmall[i] = st.top();
        }
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }
    for(int i = n-1; i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            nextsmall[i] = n;
        }
        else{
            nextsmall[i] = st.top();
        }
        st.push(i);
    }
    int maxi = 0;
    for(int i=0;i<n;i++){
        int l = arr[i];
        int w = nextsmall[i] - prevsmall[i] -1;
        int a  = l * w;
        maxi = max(maxi, a);
    }
    cout<<maxi<<endl;
}