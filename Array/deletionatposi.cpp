#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before deletion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pos;
    cout<<"Enter the position to delete (0 to "<<n-1<<"): ";
    cin>>pos;
    // Deletion at given position
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--; // Reduce the size of the array after deletion
    cout<<"Array after deletion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}