#include <iostream>
#include <utility>
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

    template <typename T>
 	class Node{
    	public:
    	T data;
    	Node<T> *next;
    
    	Node(T data) {
        	this->data = data;
        	this->next = NULL;
    	}
 	};


pair<Node<int>*,Node<int>*> helper(BinaryTreeNode<int>* root){
    if(root==NULL){
        return {NULL,NULL};
    }

    pair<Node<int>*,Node<int>*> left_output = helper(root->left);
    pair<Node<int>*,Node<int>*> right_output = helper(root->right);

    //pair.first=head,pair.second=tail

    Node<int>* mid= new Node<int>(root->data);

    if(left_output.first==NULL){
        left_output.first=mid;
        left_output.second=mid;

    }
    else{
        left_output.second->next=mid;
        // left_output.second=mid;
    }

    if(right_output.first==NULL){
        right_output.first=mid;
        right_output.second=mid;
    }
    else{
        mid->next=right_output.first;
    }

    return {left_output.first,right_output.second};

}

Node<int>* constructLinkedList(BinaryTreeNode<int>* root){
    return helper(root).first;
}