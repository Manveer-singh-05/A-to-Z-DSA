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

int rightleavesum(Node* root){
    if(root==nullptr){
        return 0;
    }
    int ans = 0;
    if(root->right!=nullptr && root->right->left == nullptr && root->right->right==nullptr){
        ans += root->right->data;
    }
    ans += rightleavesum(root->left);
   ans+=  rightleavesum(root->right);
    return ans;
}

int main(){
    Node* root = nullptr;
    root = buildTree();
    cout<<rightleavesum(root);
    return 0;
}