#include <bits/stdc++.h>
using namespace std;
int lower_b(vector<int>&arr, int target){
    int low =0 ;
    int high = arr.size()-1;
    int ans = arr.size();
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]>=target){
            ans=mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int ans = lower_b(arr,target);
    cout<<ans<<endl;
}