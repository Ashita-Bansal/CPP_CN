#include <climits>
#include <iostream>
using namespace std;

class Stackusingarray{
    int *data;
    int nextIndex;
    int capacity;

    Stackusingarray(){
        data =new int[4];
        nextIndex=0;
        capacity=4;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return (nextIndex==0);
    }

    void push(int element){
        if(nextIndex==capacity){
            int newdata= new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            capacity*=2;
            delete [] data;
            data= newdata;
        }
        data[nextIndex]=element;
        nextIndex++;
        
    }

    int pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};