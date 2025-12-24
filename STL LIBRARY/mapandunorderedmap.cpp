#include <bits/stdc++.h>
using namespace std;
int main(){
    //1. ordered map
    // always stores the keys in sorted order
    // intialization
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "efg";
    // traversal
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //some function of ordered map
    cout<<"size of map: "<<m.size()<<endl;
    cout<<"finding key 3: "<<m.count(3)<<endl; // returns 1 if key is present else 0
    m.erase(5); // erases key 5
    m.insert({4, "xyz"}); // inserts key 4 with value "xyz"
    m.empty() ? cout<<"Map is empty"<<endl : cout<<"Map is not empty"<<endl;
    m.clear(); // removes all the key value pairs
    
    if(m.find(2) != m.end()) {
    cout << "Found";
}
    else {
    cout << "Not Found";
}

    cout<<endl;

    //2. unordered map
    // does not store keys in sorted order
    // intialization
    unordered_map<int, string> um;
    um[1] = "abc";
    um[5] = "cdc";
    um[3] = "efg";
    // traversal
    for(auto i: um){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //some function of unordered map
    cout<<"size of unordered map: "<<um.size()<<endl;
    cout<<"finding key 3: "<<um.count(3)<<endl; // returns 1 if key is present else 0
    um.erase(5); // erases key 5
    um.insert({4, "xyz"}); // inserts key 4 with value "xyz"
    if(um.find(2) != um.end()) {
    cout << "Found";
}
    else {
    cout << "Not Found";
}
    cout<<endl;

    return 0;

}