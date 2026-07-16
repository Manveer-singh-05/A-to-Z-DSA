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

int countNode(Node* root) {
    if (root == nullptr)
        return 0;

    return 1 + countNode(root->left) + countNode(root->right);
}

int main() {
    Node* root = nullptr;

    root = buildTree();

    cout << "Total Nodes = " << countNode(root);

    return 0;
}