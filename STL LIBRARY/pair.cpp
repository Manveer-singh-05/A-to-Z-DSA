// A pair is a container that stores two values together.
#include <bits/stdc++.h>
using namespace std;
int main(){
    // pair intialization
    pair<int , string>p;
    p.first = 1;
    p.second = "abc";
    cout<<p.first<<" "<<p.second<<endl;

    // pair using make_pair function
    pair<int , string>p1 = make_pair(2, "def");
    cout<<p1.first<<" "<<p1.second<<endl;

    // intialization using default values
    pair<int , string>p2 = {3, "ghi"};
    cout<<p2.first<<" "<<p2.second<<endl;


    // pair of pair
    pair< int , pair< int , int > > p3 = {1, {2, 3}};
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;

    // vector of pairs
    vector<pair<int,int>> v;

    v.push_back({1, 5});
    v.push_back({2, 3});
    v.push_back({4, 8});
    for(int i=0; i<v.size(); i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    //custom sorting according to second element of pair
    vector<pair<int,int>> vec;
    vec.push_back({1, 5});
    vec.push_back({2, 3});
    vec.push_back({4, 8});
    // in descending order
    sort(vec.begin(), vec.end(), [](pair<int,int> a, pair<int,int> b){
        return a.second > b.second;
    });

    // using lambda function to sort in descending order according to second element
    sort(vec.begin(), vec.end(), [](auto &a, auto &b){
        return a.second > b.second;
    });
    return 0;
}