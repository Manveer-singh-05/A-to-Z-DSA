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
int height(Node* root){
    if(root == nullptr){
        return 0;
    }
    if(root->left == nullptr && root->right ==nullptr){
        return 0;
    }
    int lefth= 1 + height(root->left);
    int righth = 1 + height(root->right);
    return max(lefth, righth);

}

int main(){
    Node* root = nullptr;
    root = buildTree();
    cout<<height(root);
    return 0;
}