BinaryTreeNode<int>* helper(int *input,int si,int ei){
    int mid=(si+ei)/2;
    if (si>ei){
        return NULL;
    }
    BinaryTreeNode<int>* root= new BinaryTreeNode<int>(input[mid]);
    root->left=helper(input,si,mid-1);
    root->right=helper(input,mid+1,ei);

    return root;
}



BinaryTreeNode<int>* constructTree(int *input, int n){
    return helper(input,0,n-1);
}