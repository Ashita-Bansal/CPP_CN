bool isBST3(BinaryTreeNode<int>* root,int min=INT_MIN,int max=INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->data<min or root->data>max){
        return false;
    }

    bool isLeftok=isBST3(root->left,min,root->data-1);
    bool isRightok=isBST3(root->right,root->data,max);

    return (isLeftok and isRightok);
}