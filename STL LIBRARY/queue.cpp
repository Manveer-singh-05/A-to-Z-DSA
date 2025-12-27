#include <bits/stdc++.h>
using namespace std;
int main(){
    // queue in c++
    queue<int> q;
    // 1. push() - to add element to the back of the queue
    q.push(10);
    q.push(20);
    q.push(30);
    // 2. front() - to get the front element of the queue
    cout << "Front element: " << q.front() << endl; // 10

    // 3. back() - to get the back element of the queue
    cout << "Back element: " << q.back() << endl; // 30

    // 4. pop() - to remove the front element of the queue
    q.pop();
    cout << "Front element after pop: " << q.front() << endl; // 20

    // 5. size() - to get the size of the queue
    cout << "Size of queue: " << q.size() << endl; // 2

    // 6. empty() - to check if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl; // Queue is not empty
    }
    return 0;

}