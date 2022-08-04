#include <iostream>
using namespace std;
#include "node.cpp"

void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* insertNode(Node *head,int i,int data){
    Node *newNode= new Node(data);
    int count=0;
    Node *temp=head;

    if(i==0){
        newNode->next=head;
        head=newNode;
        return head;
    }

    while(temp!=NULL && count<i-1){
        temp=temp->next;
        count++;
    }
    // Node *a=temp->next;
    // temp->next=newNode;
    // newNode->next=a;
    if(temp!=NULL){
        newNode->next=temp->next;
        temp->next=newNode;
    }
    return head;
}


Node *takeInput(){
    int data;
    cin>>data;
    Node *head= NULL;
    Node *tail=NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            // Node *temp= head;
            // while(temp->next!=NULL){
            //     temp=temp->next;
            // }
            // temp->next=newNode;
            tail->next=newNode;
            tail=tail->next;
            //or
            //tail=newNode;
        }
        cin>>data;
    }
    return head;
}

int main(){
    Node *head= takeInput();
    print(head);
    int i,data;
    cin>>i>>data;
    head=insertNode(head,i,data);
    print(head);
}