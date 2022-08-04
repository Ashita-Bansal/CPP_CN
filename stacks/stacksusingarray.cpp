#include <climits>
#include <iostream>
using namespace std;

template <typename T>

class Stackusingarray{
    T* data;
    int nextIndex=0;
    int capacity;

    public:
    Stackusingarray(int totalSize){
        data= new T[totalSize];
        nextIndex=0;
        capacity=totalSize;
    }
    
    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return (nextIndex==0);
    }

    void push(T element){
        if(nextIndex==capacity){
            cout<<"stack full"<<endl;
            return;
        }

        data[nextIndex]=element;
        nextIndex++;
    }

    T pop(){
        if(nextIndex==0){
            cout<<"satck is empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    T top(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return data[nextIndex-1];

    }
};