#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data = value;
        left = right = NULL;
    }
};
Node* insert(Node* root, int value){
    if(root == NULL){
        return new Node(value);
    }
    if(value < root->data){
        root->left = insert(root->left, value);
    }
    else{
        root->right = insert(root->right, value);
    }
    return root;
}
Node* buildBST(vector<int> arr){
    Node* root = NULL;
    for(int val : arr){
        root = insert(root, val);
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main(){
    vector<int> arr = {5,3,8,1,4,7,9};
    Node* root = buildBST(arr);
    inorder(root);
    return 0;
}