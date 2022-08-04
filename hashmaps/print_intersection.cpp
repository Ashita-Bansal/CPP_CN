#include <iostream>
#include <unordered_map>

using namespace std;

void printIntersection(int arr1[], int arr2[], int n, int m) {
    unordered_map<int,int> map1;
    for(int i=0;i<n;i++){
        map1[arr1[i]]++;
    }

    for(int j=0;j<m;j++){
        if(map1.count(arr2[j])>0){
            cout<<arr2[j]<<endl;
        }
    }


}

int main(){

}