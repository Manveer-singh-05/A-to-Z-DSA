#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

Node* buildTree() {
    int x;
    cin >> x;

    if (x == -1)
        return nullptr;

    Node* root = new Node(x);

    cout << "Enter left of " << x << " : ";
    root->left = buildTree();

    cout << "Enter right of " << x << " : ";
    root->right = buildTree();

    return root;
}
vector<int> leftview(Node* root){
    if(root==nullptr){
        return {};
    }
    queue<Node*>q;
    vector<int>ans;
    q.push(root);
    while(!q.empty()){
        int s = q.size();
        int t;
        while(s--){
            Node* temp=  q.front();
            q.pop();
            t = temp->data;
            if(temp->right) q.push(temp->right);
            if(temp->left) q.push(temp->left);
        }
        ans.push_back(t);
    }
    return ans;
}

int main(){
    Node* root = nullptr;
    root = buildTree();
    vector<int>result;
   result =  leftview(root);
   for(int z : result){
    cout<<z<<" ";
   }
    return 0;
}