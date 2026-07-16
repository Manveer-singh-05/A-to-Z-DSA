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
void postorder(Node* root){
    if(root==nullptr){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root = nullptr;
    root = buildTree();
    postorder(root);
    return 0;
}