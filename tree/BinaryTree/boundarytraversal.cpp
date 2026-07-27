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
vector<int>ans;
void lefttraversal(Node* root){
    if(root ==nullptr) return ;
    if(root->left==nullptr && root->right==nullptr){
        return;
    }
    ans.push_back(root->data);
    if(root->left)lefttraversal(root->left);
    else lefttraversal(root->right);

}
void righttraversal(Node* root){
        if(root ==nullptr) return ;
    if(root->left==nullptr && root->right ==nullptr){
        return;
    }
    if(root->right) righttraversal(root->right);
    else righttraversal(root->left);
    ans.push_back(root->data);
}
void leaftraversal(Node* root){
        if(root ==nullptr) return ;
    if(root->left==nullptr && root->right==nullptr){
        ans.push_back(root->data);
        return;
    }
    leaftraversal(root->left);
    leaftraversal(root->right);
}
vector<int> boundarytraversal(Node* root){
    if(root==nullptr){
        return {};
    }
    ans.push_back(root->data);
    lefttraversal(root->left);
    leaftraversal(root->left);
    leaftraversal(root->right);
    righttraversal(root->right);
    return ans;

}
int main(){
    Node* root = nullptr;
    root = buildTree();
    vector<int>result;
    result  = boundarytraversal(root);
    for(int x: result){
        cout<<x<<" ";
    }
    return 0;
}