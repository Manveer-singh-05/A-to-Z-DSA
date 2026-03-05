#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1; // Key not found
}
int main(){
    int n, key;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in sorted order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to search: ";
    cin>>key;
    int result = binarySearch(arr, n, key);
    if(result != -1){
        cout<<"Element found at index: "<<result<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}