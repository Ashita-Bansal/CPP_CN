#include <iostream>
using namespace std;


class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


// void print(Node *head){
//     Node *temp = head;

//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// int main(){

//     Node *node1 = new Node(10);
//     Node *node2 = new Node(20);
//     Node *node3 = new Node(20);
//     Node *node4 = new Node(20);
//     node1 -> next = node2;
//     node2 -> next = node3;
//     node3 -> next = node4;
//     print(node2);
// }

void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* takeinput(){
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1){
        Node *newNode= new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}

// Node *insertNode(Node* head, int i, int data){
//     Node* newNode= new Node(data);

// }
Node *Mergetwosortedll(Node *head1, Node*head2){
    Node *finalhead=NULL;
    Node *finalTail=NULL;

    if(head1==NULL){
        return head2;
    }else if(head2==NULL){
        return head1;
    }
    
    while(head1!=NULL and head2!=NULL){
        if(finalhead==NULL){
            if(head1->data<=head2->data){
                finalhead=head1;
                finalTail=head1;
                head1=head1->next;
            }else{
                finalhead=head2;
                finalTail=head2;
                head2=head2->next;
            }
        }
        if(head1 -> data <= head2 -> data){
            
            finaltail->next = head1;
            finalTail=finalTail ->next;
            head1 = head1->next;

        }else{
            finalTail->next=head2;
            finalTail=finalTail ->next;
            head2= head2->next;
        }
    }
    if(head1==NULL){
        finalTail->next= head2;
    }else{
        finalTail->next = head1;
    }
    return finalhead;
}

// Node *reversell(Node *head){
//     if(head==NULL or head->next=NULL){
//         return head;
//     }
//     Node *smallans= reversell(head->next);
//     Node *temp= smallans;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=head;
//     head->next=NULL;
//     return smallans;
// }

Node *reversell(Node *head){
    Node* prev= NULL;
    Node *current = head;
    Node *next=head->next;
    while(current!=0){
        current->next=prev;
        prev->next=current;
        current=next;
        next=next->next;
        
    }
}