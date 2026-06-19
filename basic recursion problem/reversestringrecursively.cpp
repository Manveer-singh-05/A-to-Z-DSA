#include <bits/stdc++.h>
using namespace std;
string reverse(int left, int right, string n){
    // 1. Base case
    // if(left<=right){
    //     swap(n[left],n[right]);
    //     reverse(left+1,right-1,n);
    // }
    // else{
    //     cout<<n;
    // }

    //2 . second approach 
   if(left>right){
        cout<<n;
        return n;
    }
    swap(n[left],n[right]);
    reverse(left+1,right-1,n);
}
int main(){
    string n;
    cin>>n;
    int left = 0;
    int right = n.length() - 1;

    reverse(left,right, n);
}