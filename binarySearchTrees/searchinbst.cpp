bool searchInBST(BinaryTreeNode<int> *root , int k){
    if(root==NULL){
        return false;
    }
    if(root->data==k){
        return true;
    }
    else if(k>root->data){
        searchInBST(root->right);
    }
    else{
        searchInBST(root->left);
    }
}