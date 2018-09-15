#include "BinarySearchTree.h"

TreeNode::TreeNode(string s){
    data = s;
    left = NULL;
    right = NULL;
}

string TreeNode::getData(){
    return data;
}
BinarySearchTree::BinarySearchTree(){
    root = NULL;
    smallest = "";
}

void BinarySearchTree::insert(string key){
    insertHelper(this->root, key);
}

void BinarySearchTree::insertHelper(TreeNode *&root, string key){
    TreeNode* newNode = new TreeNode(key);
    if(root == NULL){
        root = newNode;
    }
    else if(key < root->data){
        insertHelper(root->left, key);
    }
    else if(key > root->data){
        insertHelper(root->right, key);
    }
}

string BinarySearchTree::getSmallest(){
    return getSmallestHelper(this->root);
}

string BinarySearchTree::getSmallestHelper(TreeNode* root){
    if(root == NULL){
        return smallest;
    }else{
        smallest = root->data;
        getSmallestHelper(root->left);
        return smallest;
    }
}

TreeNode* BinarySearchTree::getRoot(){
    return root;
}
