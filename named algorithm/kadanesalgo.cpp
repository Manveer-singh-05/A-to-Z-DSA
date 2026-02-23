#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int maxi = arr[0];
    // int curr = arr[0];
    // for(int i=1;i<n;i++){
    //     curr = max(arr[i], curr+arr[i]);
    //     maxi = max(maxi, curr);

    // }
    // cout<<maxi;

    // what if we want to print the subarray which is giving us the maximum sum
    
    int curr = arr[0];
    int maxi = arr[0];

    int start = 0;
    int ansStart = 0, ansEnd = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] > curr + arr[i]) {
            curr = arr[i];
            start = i;
        } else {
            curr += arr[i];
        }

        if(curr > maxi) {
            maxi = curr;
            ansStart = start;
            ansEnd = i;
        }
    }
    cout << "Maximum subarray sum is: " << maxi << endl;
    cout << "Subarray with maximum sum is: ";
    for(int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}