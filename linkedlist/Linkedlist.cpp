#include <iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data !=-1){
        Node *newNode= new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            // Node *temp=head;
            // while(temp->next != NULL){
            //     temp=temp->next;
            // }
            // temp->next=newNode;
            tail->next=newNode;
            tail=tail->next;
        }
        

        cin>>data; 
    } 
    return head;
}

void insertNode(Node* head, int i, int data){
    Node *newNode=new Node(data);
    int count=0;
    Node*temp = head;
    while(count<i-1){
        temp=temp->next;
        count++;
    }
    Node* a=temp->next;
    temp->next=newNode;
    newNode->next=a;
    // newNode->next=temp->next;
    // temp->next=newNode;

}




void print(Node *head){

    Node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    
}

int main(){

    Node* head=takeInput();
    print(head);
    int i,data;
    cin>>i>>data;
    insertNode(head,i,data);
    print(head);

    
/*
    Node n1(1);
    Node *head=&n1;

    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

    print(head);
    print(head);


    // n1.next=&n2;

    // // cout<<n1.data<<" "<<n2.data<<endl;
    // cout<<head->data;

    // //Dynamically
    // Node *n3= new Node(10);
    // Node *n4= new Node(20);
    // n3->next=n4;
    // Node *head=n3;
    */
}