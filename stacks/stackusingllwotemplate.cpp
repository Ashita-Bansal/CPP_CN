#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class Stack{
    Node *head;
    int size;

    public:

    Stack(){
        head=NULL;
        size=0;
    }

    void push(int data){
        Node* newNode= new Node(data);
        if(head==NULL){
            head=newNode;
            head->next=NULL;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
        size++;
    }

    int pop(){
        if(head==NULL){
            return -1;
        }
        else{
            int ans= head->data;
            head=head->next;
            size--;
            return ans;
            
        }
    }

    int top(){
        if(head==NULL){
            return -1;
        }
        else{
            return head->data;
        }
    }

    int size(){
        return size;
    }

    bool isEmpty(){
        return (head==NULL);
    }
};