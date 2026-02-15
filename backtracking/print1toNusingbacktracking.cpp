#include <bits/stdc++.h>
using namespace std;
void printbacktrack(int i, int n){
    if(i<1){
        return;
    }
    printbacktrack(i-1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    printbacktrack(n,n);
    return 0;
}