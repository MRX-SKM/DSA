#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

Node* BuildBST(vector<int> arr) {
    Node* root = NULL;
    for (int val : arr) {
        root = insert(root, val);
    }
    return root;
}

Node* findInorderSuccessor(Node* root) {
    Node* curr = root;
    while (curr && curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node* deleteNode(Node* root, int key) {
    if (root == NULL) {
        return NULL;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    }
    else {
        // Case 1: No left child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // Case 2: No right child
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 3: Two children
        Node* succ = findInorderSuccessor(root->right);
        root->data = succ->data;
        root->right = deleteNode(root->right, succ->data);
    }

    return root;
}

int main() {
    vector<int> arr = {10, 5, 15, 3, 7, 13, 17};

    Node* root = BuildBST(arr);

    cout << "Before deletion: ";
    inorder(root);
    cout << endl;

    root = deleteNode(root, 5);

    cout << "After deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}