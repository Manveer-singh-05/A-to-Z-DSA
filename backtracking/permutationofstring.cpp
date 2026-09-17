#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void recursive(vector<string>&ans, string curr, string s, int n){
        if(curr.size()== n){
            ans.push_back(curr);
            return;
        }
        
        for(int i = 0; i <s.size();i++){
          string remaining = s.substr(0,i) + s.substr(i+1);
           recursive(ans, curr+s[i], remaining, n);
        }
    }
    vector<string> permutation(string s) {
       int n  = s.size();
        vector<string>ans;
        recursive(ans, "", s, n);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main(){
    Solution s;
    string l;
    cin>>l;
    vector<string>ans = s.permutation(l);
    for(string x : ans){
        cout<<x<<" ";
    }

}