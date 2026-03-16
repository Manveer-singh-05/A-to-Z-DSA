
#include <bits/stdc++.h>
using namespace std;
int main(){
    // intialize a list
    list<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    cout << "List elements: ";
    for (int x : myList) {
        cout << x << " ";
    }
    cout << endl;

    // some functions of list
    cout << "Size of list: " << myList.size() << endl;
    cout << "Front element: " << myList.front() << endl;
    cout << "Back element: " << myList.back() << endl;

    myList.pop_front();

    cout << "List elements after pop_front: ";
    for (int x : myList) {
        cout << x << " ";
    }
    cout << endl;

    myList.pop_back();

    cout << "List elements after pop_back: ";
    for (int x : myList) {
        cout << x << " ";
    }
    cout << endl;

    myList.insert(myList.begin(), 5); // fixed

    cout << "List elements after insert: ";
    for (int x : myList) {
        cout << x << " ";
    }
    cout << endl;

    myList.erase(myList.begin()); // fixed

    cout << "List elements after erase: ";
    for (int x : myList) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}