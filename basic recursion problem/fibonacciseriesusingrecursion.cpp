#include <bits/stdc++.h>
using namespace std;
// int fibonacci(int N) {
   
//     if (N <= 1) {
//         return N;
//     }
//     int last = fibonacci(N - 1);  
//     int slast = fibonacci(N - 2); 

//     return last + slast;
// }

// more optimum approach
void printFibo(int n, int a, int b){
    if(n == 0)
        return;

    cout << a << " ";

    printFibo(n - 1, b, a + b);
}


int main(){
    // int n;
    // cin>>n;
    // int a= 0; 
    // int b =1;
    // cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
    // cout<<a<<" "<<b<<" ";
    // for(int i=2; i<=n; i++){
    //    cout<<fibonacci(i)<<" ";
    // }

    //optimised approach

    int n;
    cin >> n;

    cout << "Fibonacci Series:\n";
    printFibo(n, 0, 1);

    return 0;
}