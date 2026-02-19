#include <bits/stdc++.h>
using namespace std;
void bubble_recursive(int arr[] , int n){
    if(n<=1) return ;
    int didswap= 0;
    for(int j=0;j<n-2;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
            didswap = 1;
        }
    }
    if(didswap == 0) return ;
    bubble_recursive(arr, n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_recursive(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
