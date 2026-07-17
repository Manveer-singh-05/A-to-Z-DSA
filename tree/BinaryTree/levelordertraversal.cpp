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
vector <int> levelordertraversal(Node* root){
    if(root ==nullptr){
        return {};
    }
    vector <int> ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int m = q.size();
        for(int i=0;i<m;i++){
            Node* temp = q.front();
            q.pop();
            ans.push_back(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    return ans;
}

int main(){
    Node* root = nullptr;
    root = buildTree();
    vector<int>ans;
    ans  = levelordertraversal(root);
    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}