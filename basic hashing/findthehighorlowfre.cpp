#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>un;
    for(auto it: arr){
        un[it]++;
    }
    int max_fre = 0;
    int min_fre = INT_MAX;
    for(auto it: un){
        max_fre = max(max_fre, it.second);
        min_fre = min(min_fre, it.second);
    }
    cout<<"Max frequency: "<<max_fre<<endl;
    cout<<"Min frequency: "<<min_fre<<endl;
    for(auto it: un){
        if(max_fre == it.second){
            cout<<"Element with max frequency: "<<it.first<<endl;
        }
        if(min_fre == it.second){
            cout<<"Element with min frequency: "<<it.first<<endl;
        }
    }
    return 0;
}