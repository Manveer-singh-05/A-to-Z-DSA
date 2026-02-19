#include <bits/stdc++.h>
using namespace std;
void insertion_recursive(int arr[], int i, int n){
    if (i ==n) return;
    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j], arr[j-1]);
        j--;
    }
    insertion_recursive(arr, i+1, n);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_recursive(arr, 0, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}