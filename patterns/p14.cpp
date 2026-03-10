#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(char a = 'A'; a<'A'+i; a++){
            cout<<a<<" ";
        }        cout<<endl;
    }
}