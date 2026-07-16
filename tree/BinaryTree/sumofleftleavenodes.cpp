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

int leftleavesum(Node* root){
    if(root == nullptr){
        return 0;
    }
    int ans = 0;
    if(root->left!=nullptr && root->left->left==nullptr && root->left->right==nullptr){
            ans= root->left->data;    
    }
   ans +=leftleavesum(root->left);
   ans+= leftleavesum(root->right);
    return ans;
    
}
int main(){
    Node* root = nullptr;
    root = buildTree();
   cout<< leftleavesum(root);

    return 0;
}