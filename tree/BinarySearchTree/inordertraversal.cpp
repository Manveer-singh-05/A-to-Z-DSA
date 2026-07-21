#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int val){
    if(root == nullptr)
        return new Node(val);

    if(val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

Node* buildBST(){
    Node* root = nullptr;
    int x;

    while(cin >> x && x != -1){
        root = insert(root, x);
    }

    return root;
}

void inorder(Node* root){
    if(root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    Node* root = buildBST();

    inorder(root);
}