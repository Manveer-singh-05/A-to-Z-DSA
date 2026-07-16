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

int size(Node* root){
    if(root == nullptr){
        return 0;
    }
    return size(root->left) + size(root->right) + 1;
}

int main(){
    Node* root = nullptr;
    root = buildTree();
    cout<<size(root);
    return 0;
}