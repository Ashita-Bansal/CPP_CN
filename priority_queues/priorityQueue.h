#include <vector>
#include <iostream>
using namespace std;

class PriorityQueue{
    vector<int> pq;
    public:

    PriorityQueue(){

    }

    bool isEmpty(){
        return (pq.size()==0);
    }

    //return the size of priority queue-no. of elements present
    int getSize(){
        return pq.size();
    }

    int getMin(){
        if(isEmpty()){
            return 0;
        }
        return pq[0];
    }

    void insert(int element){
        pq.push_back(element);

        int childIndex=pq.size()-1;
        while(childIndex>0){
            int parentIndex=(childIndex-1)/2;
            if(pq[parentIndex]>pq[childIndex]){
                swap(pq[parentIndex],pq[childIndex]);
            }
            else
            {
                break;
            }
            childIndex=parentIndex;
        }

    }

     int removeMin(){
        if(isEmpty()){
            return 0;
        }
        int ans=pq[0];
        
        int lastIndex=pq.size()-1;
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        
        int i=0;
        int leftchildIndex=1;
        int rightchildIndex=2;
        
        while(leftchildIndex<pq.size()){
            int minIndex=i;
            if(pq[i]>pq[leftchildIndex]){
                minIndex=leftchildIndex;
            }
            if(rightchildIndex<pq.size() and pq[minIndex]>pq[rightchildIndex]){
                minIndex=rightchildIndex;
            }
            if(minIndex==i){
                break;
            }
            swap(pq[minIndex],pq[i]);
            i=minIndex;
            leftchildIndex=2*i+1;
            rightchildIndex=2*i+2;
        }
        return ans;
       
    }
    
};

