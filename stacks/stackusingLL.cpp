#include <iostream>
using namespace std;

template <typename T>
class Node{
    public:
     T data;
    Node<T> *next;
    Node(T data){
        this->data=data;
        next=NULL;
    }
};
template <typename T>
class Stack{
    Node<T> * head;
    int osize;

    public:

    int size(){
        return osize;
    }

    bool isEmpty(){
        return (head==NULL)
    }

    
};