#ifndef BINARY_H
#define BINARY_H

#include <iostream>
#include <string>

using namespace std;

class TreeNode;
class BinarySearchTree;

class TreeNode{
    
    public:
        TreeNode(string s);
        string getData();
    
    //private:
        string data;
        TreeNode* left;
        TreeNode* right;
    friend class BinarySearchTree;
    
};

class BinarySearchTree{
    
    public:
        BinarySearchTree();
        void insertHelper(TreeNode *&node, string key);
        void insert(string key);
        string getSmallest();
        string getSmallestHelper(TreeNode* root);
        TreeNode* getRoot();
        //void printHelper(TreeNode* root);
        //void print();
    
    private:
        TreeNode* root;
        string smallest;
};


#endif