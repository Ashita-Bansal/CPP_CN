
#include <bits/stdc++.h>
using namespace std;

void help(vector<int> input,string mapping[],int index,string ans){
    if(index>=input.size()){
        cout<<ans<<endl;
        return;
    }
    
    int n=input.size()-1;
    int num=input[n];
    string a=mapping[num];
    for(int i=0;i<a.size();i++){
        ans.push_back(a[i]);
        help(input,mapping,index+1,ans);
        ans.pop_back();
        
    }
}


void printKeypad(int num){
    string mapping[10]={"0","0","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   	vector<int> input;
    for(;num!=0;num/10){
        input.push_back(num%10);
    }
    
    string ans="";
    
    help(input,mapping,0,ans);
    
    
}
int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}