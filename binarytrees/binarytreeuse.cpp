#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftchild = takeInput();
    BinaryTreeNode<int>* rightchild= takeInput();
    root->left=leftchild;
    root->right=rightchild;
    return root;
}



BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;

    if(rootData==-1){
        return NULL;
    }

    BinaryTreeNode<int>* root= new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter left child of"<<front->data<<endl;
        int leftchilddata;
        cin>>leftchilddata;
        if(leftchilddata!=-1){
            BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int>(leftchilddata);
            pendingNodes.push(leftChild);
            front->left=leftChild;
        }

        cout<<"enter right child of"<<front->data<<endl;
        int rightchilddata;
        cin>>rightchilddata;
        if(rightchilddata!=-1){
            BinaryTreeNode<int>* rightChild= new BinaryTreeNode<int>(rightchilddata);
            pendingNodes.push(rightChild);
            front->right=rightChild;
        }
        
    }
    return root;
}




int numNodes(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    return 1+ numNodes(root->left) + numNodes(root->right);
}

int height(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int ans=1;
    return ans+=max(height(root->left),height(root->right));
}

int diameter(BinaryTreeNode<int>* root){
    
    if(root==NULL){
        return 0;
    }

    int option1=height(root->left)+height(root->right);
    int option2=diameter(root -> left);
    int option3= diameter(root->right);

    return max(option1,max(option2,option3));

}

pair<int,int> heightDiameter(BinaryTreeNode<int> * root){
    
}

void inOrder(BinaryTreeNode<int>*root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(BinaryTreeNode<int>* root){
      if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void preOrder(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void printTree(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left != NULL){
        cout<<"L"<<root->left->data;
    }
    if(root->right !=NULL){
        cout<<",R"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}
void printLevelWise(BinaryTreeNode<int> *root){
    if(root==NULL){
        return;
    }
    
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* front= pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        
        if(front->left!=NULL){
            cout<<"L:"<<front->left->data;
            pendingNodes.push(front->left);
        }
        else{
            cout<<"L:-1";
        }
        
        if(front->right!=NULL){
            cout<<",R:"<<front->right->data<<endl;
            pendingNodes.push(front->right);
        }else{
            cout<<",R:-1"<<endl;
        }
    }
    
    return;
}

int main(){
    // BinaryTreeNode<int>* root= new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int>* node1= new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int>* node2=new BinaryTreeNode<int>(3);

    // root->left=node1;
    // root->right=node2;

    BinaryTreeNode<int>* root= takeInput();
    printTree(root);

    delete root;


}