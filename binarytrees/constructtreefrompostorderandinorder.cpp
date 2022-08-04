#include "binarytreeuse.cpp"


BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength){
    if(postLength==0){
        return NULL;
    }

    int rootData=postorder[postLength-1];

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

    if(postLength==1){
        return root;
    }

    int leftLength=0;

    for(;leftLength<inLength;leftLength++){
        if(inorder[leftLength]==rootData){
            break;
        }
    }

    root->left = buildTree(postorder,leftLength,inorder,leftLength);
    root->right = buildTree(postorder+leftLength,postLength-leftLength-1,inorder+leftLength+1,inLength-leftLength-1);

} 