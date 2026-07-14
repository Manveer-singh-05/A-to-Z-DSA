#include <bits/stdc++.h>
using namespace std;
int mcm(int arr[], int i, int j){
    if(i>=j) return 0;
    int mini = INT_MAX;
    for(int k = i; k<j;k++){
        int temp = mcm(arr,i,k) + mcm(arr,k+1, j) + arr[i-1] * arr[k] * arr[j];
        if(temp<mini){
            mini = temp;
        }
    }
    return mini;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // to solve this mcm problem there is an universal approach that we have to follow like 
    // step 1 is find out the i and j accordoing to the question input
    // step 2 with the help of i and j find out the base condition 
    //step 3 make logic for k range that is used in for loop where k intialization depedns on i and k conditions up to j 
    // step 4 store the result in temp varibale 
    // step 5 during temp variable also make the condition according to the question after dividing the part into two parts with the help of k 
    // step 6 make a function where temp is store or evealuated according to question output like minimum and maximum 
    
    int i = 1;
    int j = n-1;
    int ans = mcm(arr,i,j);
    cout<<ans;
}