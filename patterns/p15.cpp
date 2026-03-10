#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(char j='A';j<'A'+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}