#include "binarytreeuse.cpp"

void printLevelWise(BinaryTreeNode<int> *root){
    
    if(root==NULL){
        return;
    }
    
    queue<BinaryTreeNode<int>*> pending_nodes;

    pending_nodes.push(root);
    
    while(pending_nodes.size()!=0){
        BinaryTreeNode<int>* front = pending_nodes.front();
        pending_nodes.pop();
        cout<<front->data<<":";
        if(front->left->data != -1){
            cout<<"L:"<<front->left->data;
            pending_nodes.push(front->left);
        }
        else{
            cout<<"L:-1";
        }

        if(front->right->data !=-1){
            cout<<",R:"<<front->right->data;
            pending_nodes.push(front->right);
        }
        else{
            cout<<",R:-1"
        }
    }
    
}


//level order traversal
void printLevelWise(BinaryTreeNode<int> *root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<endl;

    queue<BinaryTreeNode<int>*> pendingNodes;
    queue.push(root);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* front= pendingNodes.front();
        if(front->left){
            cout<<front->left->data<<" ";
            pendingNodes.push(front->left);
        }
        if(front->right){
            cout<<front->right->data<<endl;
            pendingNodes.push(front->right);
        }
    }
}