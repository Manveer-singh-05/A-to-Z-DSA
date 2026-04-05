#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  int first_occur(vector<int>&arr, int target){
      
        int low = 0;
        int high = arr.size()-1;
        int count= -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==target){
                count = mid;
                high = mid-1;
                
            }
            else if(arr[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return count;
  }
  int last_occur(vector<int>&arr, int target){
        int low = 0;
        int high = arr.size()-1;
        int count = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==target){
                count = mid;
                low = mid+1;
            }
            else if(arr[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return count;
      
  }
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n = first_occur(arr,target);
        if(n==-1) return 0;
        int m = last_occur(arr,target);
        return m-n+1;
    }
};

int main(){
    int n, target;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in sorted order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the target to count frequency: ";
    cin>>target;
    
    Solution sol;
    int frequency = sol.countFreq(arr, target);
    
    cout<<"Frequency of "<<target<<" is: "<<frequency<<endl;
    
    return 0;
}