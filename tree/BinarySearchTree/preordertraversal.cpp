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

Node* insert(Node* root, int val) {
    if (root == nullptr)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

Node* buildBST() {
    Node* root = nullptr;
    int x;
    while (cin >> x && x != -1) {
        root = insert(root, x);
    }
    return root;
}
void preorder(Node* root){
    if(root ==nullptr){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = nullptr;
    root = buildBST();
    preorder(root);
    return 0;
}