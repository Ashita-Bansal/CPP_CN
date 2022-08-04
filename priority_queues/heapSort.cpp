#include <iostream>
using namespace std;

void inPlaceHeapSort(int pq[],int n){
    //build the heap 
    for(int i=1;i<n;i++){
        int childIndex=i;
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

    //sort the array by calling remove function n times
    int size=n;
    while(size>1){
        swap(pq[0],pq[size-1]);
        size--;
        int i=0;
        int leftchildIndex=1;
        int rightchildIndex=2;
        
        while(leftchildIndex<size){
            int minIndex=i;
            if(pq[i]>pq[leftchildIndex]){
                minIndex=leftchildIndex;
            }
            if(rightchildIndex<size and pq[minIndex]>pq[rightchildIndex]){
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
    }
}

int main(){
    int a[]={5,8,2,1,0};
    inPlaceHeapSort(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}