#include <bits/stdc++.h>
using namespace std;
int main(){
    // stack in C++
    stack<int> st;

    // 1. push() - to add element to stack
    st.push(10);
    st.push(20);
    st.push(30);

    // 2. top() - to get the top element of stack
    cout << "Top element: " << st.top() << endl; // 30

    // 3. pop() - to remove the top element of stack
    st.pop();
    cout << "Top element after pop: " << st.top() << endl; // 20

    // 4. size() - to get the size of stack
    cout << "Size of stack: " << st.size() << endl; // 2

    // 5. empty() - to check if stack is empty
    if (st.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl; // Stack is not empty
    }

    

    return 0;
}