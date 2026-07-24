#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
Node* bst(int arr[], int i, int j){
     if(i>j) return nullptr;
     int mid = i + (j-i)/2;
     Node* root = new Node(arr[mid]);
     root->left = bst(arr,i,mid-1);
     root->right =bst(arr,mid+1,j);
     return root;
}
void print(Node* root){
    if(root==nullptr){
        return ;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   Node* root =  bst(arr,0,n-1);
   print(root);
}