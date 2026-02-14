#include <bits/stdc++.h>
using namespace std;
int power(int base, int exp){
    int result = 1;
    while(exp--){
        result *= base;
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    int length = to_string(n).length();
    int sum = 0 ;
    int temp = n;
    while(temp>0){
        int rem  = temp%10;
        sum+=power(rem, length);
        temp /=10;
    }
    if(sum == n) cout<<"Armstrong Number";
    else cout<<"Not an Armstrong Number";
}