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
    if(val < root -> data){
        root -> left = insert(root -> left, val);
    }
    else{
        root -> right = insert(root -> right, val);
    }
    return root;
}
Node* BuiltBST(vector<int>arr){
    Node* root = NULL;
    for(int val : arr){
        root = insert(root, val);
    }
    return root;
}
bool search(Node* root, int key){//O(Height)
    if(root == NULL){
        return false;
    }
    if(root -> data == key){
        return true;
    }
    else if(key < root -> data){
        return search(root -> left, key);
    }
    else{
        return search(root -> right, key);
    }
}
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}
int main(){
    vector<int>arr = {10, 5, 15, 3, 7, 13, 17};
    Node* root = BuiltBST(arr);
    inorder(root);
    cout<< "\n" << search(root, 7) << endl; // Output: 1 (true)
    cout<< search(root, 12) << endl; // Output: 0 (false)
    return 0;
}