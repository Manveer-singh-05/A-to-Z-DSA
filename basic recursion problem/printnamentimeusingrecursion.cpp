#include <bits/stdc++.h>
using namespace std;
void printName(int n, const string &name){
    if(n==0){
        return;
    }
    cout<<"My name is "<<name<<endl;
    printName(n-1, name);
}
int main(){
    int n;
    cin>>n;
    string name;
    cin>>name;
    printName(n,name);
    return 0;

}