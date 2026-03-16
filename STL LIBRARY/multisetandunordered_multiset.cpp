#include <bits/stdc++.h>
using namespace std;
int main(){
    // Multiset
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(10); // Duplicate element
    ms.insert(30);

    cout << "Multiset elements: ";
    for (int x : ms) {
        cout << x << " "; // Should print 10 10 20 30
    }
    cout << endl;

    // some functions of multiset
    cout << "Count of 10 in multiset: " << ms.count(10) << endl;
    cout<< "erase of multiset: "<<ms.erase(10)<<endl;

    ms.erase(ms.find(20));
    cout<<"erase only one 10"<<endl;

    cout <<"Multiset size after erase: "<<ms.size()<<endl;

    // Unordered Multiset
    unordered_multiset<int> ums;
    ums.insert(10);
    ums.insert(20);
    ums.insert(10);
    ums.insert(30);

    cout << "Unordered Multiset elements: ";
    for (int x : ums) {
        cout << x << " ";
    }
    cout << endl;

    // some functions of unordered_multiset
    cout << "Count of 10 in unordered multiset: " << ums.count(10) << endl;
    cout<< "erase of unordered multiset: "<<ums.erase(10)<<endl;

    ums.erase(ums.find(20));
    cout<<"erase only one 10"<<endl;

    cout <<"Unordered Multiset size after erase: "<<ums.size()<<endl;

    return 0;
}