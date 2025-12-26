#include <bits/stdc++.h>
using namespace std;
int main(){
    //set just store unique element only and store in sorted order
    //1. intializing the set
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(2);   // ignored (duplicate)

    //2. traversing the set
   for(auto x: s){
        cout<<x<<" ";   // 2 5 8
   }
   // functions in set
   //1. find()
   if(s.find(5) != s.end()){
        cout<<"\n5 is present in set"<<endl;
    }else{
        cout<<"\n5 is not present in set"<<endl;
    }

    //2. erase()
    s.erase(2);  // removes 2 from set
    cout<<"After erasing 2, set contains: ";
    for(auto x: s){
        cout<<x<<" ";   // 5 8
    }
    //3. size()
    cout<<"\nSize of set: "<<s.size()<<endl;  // 2







}