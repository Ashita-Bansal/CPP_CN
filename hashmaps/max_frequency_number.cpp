#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> RemoveDuplicates(int *a,int size){
    vector<int> output;
    unordered_map<int,bool> seen;
    for(int i=0;i<size;i++){
        if(seen.count(a[i])>0){
            continue;
        }
        seen[a[i]]=true;
        output.push_back(a[i]);
    }
    return output;
}

int highestFrequency(int arr[], int n){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    vector<int> our_array = RemoveDuplicates(arr,n);
    int max=0;
    for(int i=0;i<our_array.size();i++){
        if(map.count[our_array[i]]>max){
            max=map.count[our_array[i]];
        }
    }
    return max;
}

int main(){

}

