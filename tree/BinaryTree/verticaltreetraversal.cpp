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
vector<vector<int>>verticaltraversal(Node* root){
    if(root==nullptr){
        return {};
    }
    vector<vector<int>>ans;
    map<int,vector<int>>mp;
    queue<pair<Node*, int>>q;
    q.push({root,0});
    while(!q.empty()){
            pair<Node*, int>temp = q.front();
            q.pop();
           int t = temp.second;
           Node* k = temp.first;
           mp[t].push_back(k->data);
           if(k->left) q.push({k->left, t-1});
           if(k->right) q.push({k->right, t+1});
           
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;

}
int main(){
    Node* root = nullptr;
    root = buildTree();
    vector<vector<int>>result;
    result = verticaltraversal(root);
    for(vector<int>a : result){
       for(int x : a){
        cout<<x<<" ";
       }
       cout<<endl;
    }
    return 0;
}