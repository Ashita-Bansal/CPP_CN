#include <iostream>
using namespace std;

bool is_sorted(int a[],int size){
    if (size==0||size==1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool is_smaller_sorted=is_sorted(a+1,int size-1);
    return is_smaller_sorted;
}

int main(){
    int size;
    cin>>size;
    int a[10];
    for (int i=0;i<size;i++){
        cin>>n;
    }
}