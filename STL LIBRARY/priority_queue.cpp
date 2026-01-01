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

    // Min-heap using greater<int>
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(20);
    min_pq.push(15);
    cout << "Top element of min-heap: " << min_pq.top() << endl; // Should print 10
    min_pq.pop();
    cout << "Top element of min-heap after pop: " << min_pq.top() << endl; // Should print 15
    
    return 0;
}