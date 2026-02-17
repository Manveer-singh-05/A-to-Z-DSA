#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    unordered_map<int,int> m;
    m[0] = 1;   // Important: for subarrays starting from index 0

    int curr_sum = 0;
    int result = 0;

    for(int i = 0; i < n; i++){
        curr_sum += arr[i];


        if(m.find(curr_sum - k) != m.end()){
            result += m[curr_sum - k];
        }

        m[curr_sum]++;
    }

    cout << result;

    return 0;
}
