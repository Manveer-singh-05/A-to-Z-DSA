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
//6. accessing elements of vector
    cout<<"First element of v: "<<v[0]<<endl;
    cout<<"Second element of v2: "<<v2.at(1)<<endl;
    cout<<"Size of v3: "<<v3.size()<<endl;
    cout<<"Is v4 empty? "<<(v4.empty() ? "Yes" : "No")<<endl;
    cout<<"Last element of v5: "<<v5.back()<<endl;
    cout<<"First element of v5: "<<v5.front()<<endl;
    cout<<"Capacity of v5: "<<v5.capacity()<<endl;
    cout<<"Clear v5"<<v5.clear()<<endl;
    cout<<"Size of v5 after clear: "<<v5.size()<<endl;
    cout<<"remove element from back of v2"<<v2.pop_back()<<endl;
    cout<<"add element in v2 at last"<<v2.push_back(40)<<endl;
    cout<<"resize v3 to 3"<<v3.resize(3)<<endl;
    cout<<"insert element at specific position in v"<<v.insert(v.begin()+2, 99)<<endl;
    cout<<"erase element at specific position in v"<<v.erase(v.begin()+1)<<endl;

//7. iterating through vector
    cout<<"Iterating through v4: ";
    for(auto it = v4.begin(); it != v4.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
//8. 2d vector
    vector<vector<int>>v2d = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout<<"2D Vector: "<<endl;
    for(int i = 0; i < v2d.size(); i++){
        for(int j = 0; j < v2d[i].size(); j++){
            cout<<v2d[i][j]<<" ";
        }
        cout<<endl;
    }

//9. 2d matrix using vector
    int rows = 3, cols = 3;
    vector<vector<int>>matrix(rows, vector<int>(cols, 0)); // 3x3 matrix initialized with 0
    cout<<"2D Matrix: "<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

//10. some sort trick of vector
    // sort in ascending and descending order
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    // find max and min element in vector
    cout<<"Max element in v: "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"Min element in v: "<<*min_element(v.begin(),v.end())<<endl;
    


return 0;
}