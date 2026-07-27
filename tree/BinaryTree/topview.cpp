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
vector <int>topview(Node* root){
    vector<int>ans;
    map<int, int>mp;
    queue<pair<Node*, int>>q;
    q.push({root,0});
    while(!q.empty()){
        int n = q.size();
        pair<Node* , int>temp = q.front();
        q.pop();
        Node* k = temp.first;
        int  t= temp.second;
        if(mp.find(t)==mp.end()){
            mp[t] = k->data;
        }
        if(k->left) q.push({k->left, t-1});
        if(k->right) q.push({k->right, t+1});
    }
    for(auto &it: mp){
        ans.push_back(it.second);
    }
    return ans;
}
int main(){
    Node* root = nullptr;
    root = buildTree();
    vector<int>result;
    result = topview(root);
    for(int x: result){
        cout<<x<<" ";
    }
    return 0;
}