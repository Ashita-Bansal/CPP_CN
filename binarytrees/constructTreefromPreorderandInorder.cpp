#include "binarytreeuse.cpp"


BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength){

    if(preLength == 0){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[0]);
    
    if(preLength==1){
        return root;
    }
    

    int i=0;

    for(; i<inLength;i++){
        if(inorder[i]==preorder[0]){
            break;
        }
    }
    root->left= buildTree(preorder+1,i,inorder,i);
    root->right=buildTree(preorder+i+1,preLength-(i+1),inorder+i+1,inLength-(i+1));


}