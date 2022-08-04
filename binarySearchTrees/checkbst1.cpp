#include <climits>
#include <iostream>
using namespace std;

int minimum(BinaryTreeNode<int>* root){
    if(root==NULL){
        return INT_MAX;
    }
    
    return min(root->data,min(minimum(root->left),minimum(root->right)));
}

int maximum(BinaryTreeNode<int>* root){
    if(root==NULL){
        return INT_MIN;
    }

    return max(root->data,max(maximum(root->left),maximum(root->right)));
}

bool isBST(BinaryTreeNode<int> *root){
    if(root==NULL){
        return true;
    }

    int left_max= maximum(root->left);
    int right_min=minimum(root->right);

    bool ans = (root->data>left_max) and (root->data<=right_min) and isBST(root->left) and isBST(root->right);

    return ans;
}