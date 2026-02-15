#include <bits/stdc++.h>
using namespace std;
void printnum(int n, int i){
    if(n==0 || n<0 ) return;
    cout<<i<<" ";
    printnum(n-1, i+1);
}
int main(){
    int n;
    cin>>n;
    printnum(n, 1);
    return 0;

}