#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    unordered_map<int,int> m;
    int sum = 0;
    int maxlen = 0;
    m[0]= -1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(m.find(sum-k)!=m.end()){
            maxlen = max(maxlen,i-m[sum-k]);
        }
        if(m.find(sum)==m.end()){
            m[sum] = i;
        }
    }
    cout<<maxlen;
}