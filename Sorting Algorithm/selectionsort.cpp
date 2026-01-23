#include <bits/stdc++.h>
using namespace std;
int main(){
    // In this we repeatedly select the minimum element from unsorted part and
    // put it at the beginning
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Selection Sort Algorithm
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[min_index],arr[i]);
    }
    cout<<"Array after sorting: ";
    for(int i=0;i<n;i++){   
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}