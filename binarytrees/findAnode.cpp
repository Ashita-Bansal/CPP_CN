#include "binarytreeuse.cpp"

bool isNodePresent(BinaryTreeNode<int> *root, int x){
    if (root==NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }

    return isNodePresent(root->left,x) or isNodePresent(root->right,x);
    

} 