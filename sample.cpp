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
        root -> left = insert(root -> left , val);
    }else{
        root -> right = insert(root -> right , val);
    }
    return root;
}
Node* buildbst(vector<int>arr){
    Node* root = NULL;
    for(int val : arr){
        root = insert(root, val);
    }
    return root;
}
Node* findinordresucc(Node* root){
    Node* curr = root;
    while(curr && curr -> left != NULL){
        curr = curr -> left;
    }
    return curr;
}
Node* deleteNode(Node* root, int val){
    if(root == NULL){
        return NULL;
    }
    if(val < root -> data){
        root -> left = deleteNode(root -> left , val);
    }
    else if(val > root -> data){
        root -> right = deleteNode(root -> right , val);
    }
    else{
        if(root -> left == NULL){
            Node* temp = root -> right;
            delete root;
            return temp;
        }
        else if(root -> right == NULL){
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        else{
            Node* succ = findinordresucc(root -> right);
            root -> data = succ -> data;
            root -> right = deleteNode(root -> right, succ -> data);
        }
        return root;
    }
}
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}
int main(){
    vector<int>arr = {1,3,5,7,9,2,4,6,8};
    Node* root = buildbst(arr);
    inorder(root);
    cout << endl;
    root = deleteNode(root,5);
    inorder(root);
    cout << endl;
    return 0;
}