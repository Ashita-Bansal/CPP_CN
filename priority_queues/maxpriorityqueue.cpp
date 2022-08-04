#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class PriorityQueue{
    vector<int> pq;

    public:
    PriorityQueue(){

    }
    int getSize(){
        return pq.size();
    }

    bool isEmpty(){
        return (pq.size()==0);
    }

    void insert(int element){
        pq.push_back(element);

        int childIndex=pq.size()-1;
        
        while(childIndex>0){
            int parentIndex=(childIndex-1)/2;
            if(pq[childIndex]>pq[parentIndex]){
                swap(pq[childIndex],pq[parentIndex]);
            }else{
                break;
            }
            childIndex=parentIndex;
        }
        
    }

    int getMax(){
        if(isEmpty()){
            return INT_MAX;
        }
        return pq[0];
    }

    int removeMax(){
        if(isEmpty()){
            return INT_MAX;
        }

        int lastIndex=pq.size()-1;
        int ans=pq[0];
        pq[0]=pq[lastIndex];
        pq.pop_back();

        int parentIndex=0;
        int leftchildIndex=1;
        int rightchildIndex=2;

        while(leftchildIndex<pq.size()){
            int maxIndex=parentIndex;
            if(pq[parentIndex]<pq[leftchildIndex]){
                maxIndex=leftchildIndex;
            }
            if(rightchildIndex<pq.size() && pq[maxIndex]<pq[rightchildIndex]){
                maxIndex=rightchildIndex;
            }
            if(maxIndex==parentIndex){
                break;
            }
            swap(pq[parentIndex],pq[maxIndex]);
            parentIndex=maxIndex;
            leftchildIndex=parentIndex*2+1;
            rightchildIndex=parentIndex*2+2;
        }
        return ans;
    }
};

int main(){

}