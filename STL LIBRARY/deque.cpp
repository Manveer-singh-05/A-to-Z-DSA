#include <bits/stdc++.h>
using namespace std;
int main(){
    //1. intialization
    deque<int> dq1; //empty deque
    deque<int> dq2(5); //deque of size 5 with default values (0)
    deque<int> dq3(5, 10); //deque of size 5 with all values as 10
    deque<int> dq4 = {1, 2, 3, 4, 5}; //deque with initializer list
    
    //2. Insertion
    dq1.push_back(10); //insert at back
    dq1.push_front(20); //insert at front

    //3. Deletion
    dq1.pop_back(); //remove from back
    dq1.pop_front(); //remove from front

    //4. Accessing elements
    cout << "Front element: " << dq4.front() << endl; //access front
    cout << "Back element: " << dq4.back() << endl; //access back
    cout << "Element at index 0: " << dq4.at(0) << endl; //access at index
    
    //5. Size and capacity
    cout << "Size of dq4: " << dq4.size() << endl; //size
    cout << "Is dq1 empty? " << (dq1.empty() ? "Yes" : "No") << endl; //check empty

    //6. Iteration
    cout << "Elements in dq4: ";
    for(auto it = dq4.begin(); it != dq4.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    //7. Clear
    dq4.clear(); //clear all elements
  

    return 0;
}