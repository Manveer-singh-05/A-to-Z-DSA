#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        char a ='A';
        int breakpoint  = 2*i+1;
        for(int j=0;j<2*i+1;j++){
            if(j<=breakpoint/2){
                cout<<a<<" ";
                a++;
            }
            else{
                a--;
                cout<<a<<" ";
            }
        }
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
}