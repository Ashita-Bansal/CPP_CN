#include <iostream>
#include <vector>
// #include <utility>
using namespace std;



template <typename T>
class BinaryTreeNode {
  	public: 
   	T data;
   	BinaryTreeNode<T> *left;
   	BinaryTreeNode<T> *right;
    	BinaryTreeNode(T data) {
           	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};


vector<int>* getRootNodepath(BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }
    if(root->data==data){
        vector<int>* output= new vector<int>();
        output->push_back(root->data);
        return output;
    }
    
    vector<int>* left_output= getRootNodepath(root->left);
    if(left_output !=NULL){
        left_output->push_back(root->data);
        return left_output;
    }

    vector<int>* right_output=getRootNodepath(root->right);
    if(right_output!=NULL){
        right_output->push_back(root->data);
        return right_output;
    }
    else{
        return NULL;
    }
}
