#include <bits/stdc++.h>
using namespace std;
int main(){
    // in this we select an element and place it at its correct position in sorted array
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
    // Insertion Sort Algorithm
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"Array after sorting: ";
    for(int i=0;i<n;i++){   
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}