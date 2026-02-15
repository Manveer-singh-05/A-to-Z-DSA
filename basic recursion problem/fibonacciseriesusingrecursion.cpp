#include <bits/stdc++.h>
using namespace std;
int fibonacci(int N) {
   
    if (N <= 1) {
        return N;
    }
    int last = fibonacci(N - 1);  
    int slast = fibonacci(N - 2); 

    return last + slast;
}

int main(){
    int n;
    cin>>n;
    int a= 0; 
    int b =1;
    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
    cout<<a<<" "<<b<<" ";
    for(int i=2; i<=n; i++){
       cout<<fibonacci(i)<<" ";
    }


}