#include "BinaryTreeNode.h"
#include <iostream>
using namespace std;

class BST{
    BinaryTreeNode<int>* root;

    public:
    BST(){
        root=NULL;
    }

    ~BST(){
        delete root;
    }

    private:
    BinaryTreeNode<int>* deleteData(int data,BinaryTreeNode<int>* node){
        if(node==NULL){
            return NULL;
        }
        if(data>node->data){
            node->right=deleteData(data,node->right);
            return node;
        }
        else if(data<node->data){
            node->left=deleteData(data,node->left);
            return node;
        }
        else{
            if(node->left==NULL and node->right==NULL){
                delete node;
                return NULL;
            }
            else if(node->left==NULL){
                BinaryTreeNode<int>* temp=node->right;
                node->left=NULL;
                delete node;
                return temp;
            }
            else if(node->right==NULL){
                BinaryTreeNode<int>* temp= node->left;
                node->right=NULL;
                delete node;
                return temp;
            }
            else{
                BinaryTreeNode<int>* minNode=node->right;
                while(minNode->left!=NULL){
                    minNode=minNode->left;
                }
                int rightMin=minNode->data;
                node->data= rightMin;
                node->right=deleteData(rightMin,node->right);
                return node;
            }
        }
    }
    public:
    void remove(int data){
        root=deleteData(data,root);
    }

    private:
    BinaryTreeNode<int>* insertData(int data,BinaryTreeNode<int>* root){
        if(root==NULL){
            BinaryTreeNode<int>* newNode= new BinaryTreeNode<int>(data);
            root=newNode;
            return root;
        }
        else if(data<root->data){
            root->left=insertData(data,root->left);
        }
        else{
            root->right=insertData(root->right);
        }
        return root;
    }

    public:
    void insert(int data){
        insertData(data,root);

    }

    private:
    bool hasData(int data,BinaryTreeNode<int>* node){
        if(node==NULL){
            return false;
        }
        if(node->data==data){
            return true;
        }
        else if(node->data<data){
            hasData(data,node->right);
        }
        else{
            hasData(data,node->left);
        }

    
    }
    public:
    bool search(int data){
        hasData(data,root);
    }

    private:
    void print(BinaryTreeNode<int>* root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<":";
        if(root->left){
            cout<<"L:"<<root->left->data;
        }
        if(root->right){
        cout<<",R:"<<root->right->data;
        }
        cout<<endl;
        print(root->left);
        print(root->right);

    }

    public:
    void print(){
        return print(root);
    }
};