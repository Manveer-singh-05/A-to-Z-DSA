#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;
    //always keeps the largest element at the top
    pq.push(10);
    pq.push(20);
    pq.push(15);
    cout << "Top element: " << pq.top() << endl; // Should print 20
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl; // Should print 15
    return 0;
}