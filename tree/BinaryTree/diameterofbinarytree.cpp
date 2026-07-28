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
int ans = 0;
int height(Node* root){
    if(root==nullptr){
        return 0;
    }
    int lefti = height(root->left);
    int righti = height(root->right);
    ans = max(ans, lefti+ righti);
    return 1 + max(lefti, righti);
}
int diameter(Node* root){
    if(root==nullptr) return 0;
    height(root);
    return ans;
}

int main(){
    Node* root = nullptr;
    root = buildTree();
    int k ;
    k = diameter(root);
    cout<<k;
    return 0;
}