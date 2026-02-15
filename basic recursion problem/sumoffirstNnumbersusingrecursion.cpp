#include <bits/stdc++.h>
using namespace std;
int printSum(int n){
    if(n<1){
        return 0;
    }
    return n + printSum(n-1);
}

int main(){
    int n;
    cin>>n;
    int sum =0;
    sum = printSum(n);
    cout<<sum;
}