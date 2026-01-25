// #include<iostream>
// #include<vector>
// using namespace std;
// struct Node{
//     int key;
//     Node* left;
//     Node* right;
//     int height;
// };
// max(height(left),
// height(right)) + 1 or 0 for NULL;
// height(left) - height(right);

// struct Node* rightRotate(struct Node* y){
//     struct Node* x = y->left;
//     struct Node* T2 = x->right;

//     x->right = y;
//     y->left = T2;
    
//     y->height = max(height(y->left), height(y->right)) + 1;
//     x->height = max(height(x->left), height(x->right)) + 1;

//     return x;
// }
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int key;
    struct Node* left;
    struct Node* right;
    int height;
};
int height(struct Node* N) {
    return N ? N -> height : 0;
}
int max(int a, int b) {
    return (a > b) ? a : b;
}
struct Node* newNode(int key) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1; 
    return node;
}
int main(){
    struct Node* root = NULL;
    root = insertNode(root, 2);
    root = insertNode(root, 1); // triggers righ rotation
    printf("preorder: ");
    printPreOrder(root);//output reflects right rotation
    return 0;
}