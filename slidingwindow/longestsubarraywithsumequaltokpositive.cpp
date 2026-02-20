#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxilen =0;
    int sum =0;
    int k ;
    cin>>k;
    int i=0;
    for(int j=0;j<n;j++){
        sum+= arr[j];
        while(sum>k){
            sum-=arr[i];
            i++;
        }
        if(sum==k){
            maxilen = max(maxilen,j-i+1);
        }
    }
    cout<<maxilen<<endl;
}