#include <iostream>
#include <vector>
#include "treeuse.cpp"

int sumOfNodes(TreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int ans = root->data;
    for(int i=0;i<root->children.size();i++){
        ans+=sumOfNodes(root->children[i]);
    }
    return ans;
}

TreeNode<int>* maxDataNode(TreeNode<int>* root){
    if(root==NULL){
        return;
    }

    TreeNode<int>* ans = root;
    for(int i=0;i<root->children.size();i++){
        TreeNode<int>* temp = maxDataNode(root->children[i]);
        if(temp->data> ans->data){
            ans=temp;
        }
        
    }
    return ans;

}

int countLeafNodes(TreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    if(root->children.size()==0){
        return 1;
    }
    int ans=0;
    for(int i=0;i<root->children.size();i++){
        ans+= countLeafNodes(root->children[i]);
    }
    return ans;
}