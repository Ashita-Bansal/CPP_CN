#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    TreeNode<int>* root= new TreeNode<int>(rootData);

    queue<TreeNode<int>*> PendingNodes;

    PendingNodes.push(root);

    while(PendingNodes.size()!=0){
        TreeNode<int>* front = PendingNodes.front();
        PendingNodes.pop();

        int numChild;
        cout<<"enter the number of children of"<<front->data<<endl;
        cin>>numChild;

        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            PendingNodes.push(child);
        }

    }
    return root;
}

int NumNodes(TreeNode<int>* root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=NumNodes(root->children[i]);
    }
    return ans;
}

void preorder(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data << " ";
    for(int i=0; i < root->children.size() ; i++){
        preorder(root->children[i]);
    }
}

void postOrder(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    for(int i=0;i<root->children.size() ; i++){
        postOrder(root->children[i]);

    }
    cout << root->data;
}

TreeNode<int>* takeinput(){
    int rootData;
    cout<<"enter data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    int n;
    cout<<"enter the number of children of "<<rootData<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        TreeNode<int>* child=takeinput();
        root->children.push_back(child);
    }

    return root;
}

void printTree(TreeNode<int>* root){
    if(root==NULL){//not a base case
        return;
    }
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        if(i!=0){
            cout<<",";
        }
        cout<<root->children[i]->data;
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}

int main(){
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int> *node1= new TreeNode<int>(2);
    // TreeNode<int> *node2=new TreeNode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);

    TreeNode<int>* root=takeInputLevelWise();
    printTree(root);
}