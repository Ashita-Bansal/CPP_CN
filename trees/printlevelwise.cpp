#include <iostream>
#include <queue>
#include <vector>
#include "TreeNode.h"
using namespace std;



void printLevelWise(TreeNode<int>* root){

    if(root==NULL){
        return;
    }

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    
    while(pendingNodes.size()!=0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->children.size();i++){
            if(i!=0){
                cout<<",";
            }
            cout<<front->children[i]->data;
            pendingNodes.push(front->children[i]);

        }
        cout<<end;
    }

    
}