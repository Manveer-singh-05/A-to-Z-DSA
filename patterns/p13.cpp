#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j =1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
    }
}