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
int countofleavesnode(Node* root){
    if(root ==nullptr){
        return 0;
    }
    if(root->left == nullptr && root->right  == nullptr){
        return 1;
    }
   return  countofleavesnode(root->left) + countofleavesnode(root->right);

}

int main(){
    Node* root = nullptr;
    root = buildTree();
    cout<<countofleavesnode(root);
    return 0;
}