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

int pairSum(int *arr, int n){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }

    vector<int> newArr = RemoveDuplicates(arr,n);

    int ans=0;
    for(int j=0;j<newArr.size();j++){
        
        int x=newArr[j];
        for(int i=j+1;i<newArr.size();i++){
            if(x+newArr[i]==0){
                ans+= max(map[x],map[newArr[i]]);
            }
            else{
                continue;
            }
        }
    }

    return ans;
}

int main(){

}