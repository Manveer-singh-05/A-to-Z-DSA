#include <bits/stdc++.h>
using namespace std;
    vector<int> findTwoElement(vector<int>& arr) {

       long long s1 = 0;
       long long s2 = 0;

       for(int i = 0; i < arr.size(); i++){
           s1 += arr[i];
           s2 += 1LL * arr[i] * arr[i];
       }

       int n = arr.size();

       long long req1 = 1LL * n * (n + 1) / 2;
       long long req2 = 1LL * n * (n + 1) * (2*n + 1) / 6;

       long long A = s1 - req1;     
       long long B = s2 - req2;     

       long long c = B / A;       
       long long R = (A + c) / 2;
       long long M = R - A;

       return {(int)R, (int)M};
    }
    int main(){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<int> result = findTwoElement(arr);
        cout<<"Repeating element: "<<result[0]<<endl;
        cout<<"Missing element: "<<result[1]<<endl;
    }
