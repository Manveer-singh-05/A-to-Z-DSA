// IN this we see that how to use vector in c++

#include <bits/stdc++.h>
using namespace std;
int main(){
// 1. declaring a vector with initial values
    vector<int>v = {1,2,3,4,5};
    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;
// 2. declaring a vector without initial values
    vector<int>v2;
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);
    for(int x: v2){
        cout<<x<<" ";
    }
    cout<<endl;
// 3. declaring a vector of size n with all values initialized to value
    int n = 5;
    vector<int>v3(n, 100); // vector of size 5 with all values as 100
    for(int x: v3){
        cout<<x<<" ";
    }
    cout<<endl;
// 4. declaring a vector by copying another vector
    vector<int>v4(v); // copying vector v to v4
    for(int x: v4){
        cout<<x<<" ";
    }
    cout<<endl;
// 5. declaring a vector with initial size
    vector<int>v5(5); 
    v5.push_back(1);
    v5.push_back(2);
    v5.push_back(3);
    v5.push_back(4);
    v5.push_back(5);
    for(int x: v5){
        cout<<x<<" ";
    }
    cout<<endl;
}