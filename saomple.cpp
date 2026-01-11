#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
Node* insert(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if( root -> data > val){
        root -> left = insert(root -> left, val);
    }else{
        root -> right = insert(root -> right, val);
    }
    return root;
}
Node* BuildBST(vector<int>arr){
    Node* root = NULL;
    for(int val : arr){
        root = insert(root, val);
    }
    return root;
}
bool search(Node* root, int key){
    if(root == NULL){
        return false;
    }
    if(root -> data == key){
        return true;
    }
    else if(key < root -> data){
        return search(root -> left, key);
    }else{
        return search(root -> right, key);
    }
}
void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main(){
    vector<int>arr = {1,4,7,9,6,3,5,2,8};
    Node* root = BuildBST(arr);
    inorder(root);
    cout << "\n" << search(root, 5) << endl; // Output: 1 (true)
    cout << search(root, 10) << endl; // Output: 0 (false
    return 0;
}