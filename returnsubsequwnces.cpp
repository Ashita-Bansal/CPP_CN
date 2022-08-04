/*return all the subsequences of a string*/
#include <iostream>
using namespace std;

int subs(string input,string output[]){
    if(input.size()==0){
        output[0]="";
        return 1;
    }
    string smallstring = input.substr(1);
    int smallsubs = subs(smallstring,output);
    for(int i=0;i<smallsubs;i++){
        output[smallsubs+i]=input[0]+output[i];

    }
    return 2*smallsubs;

}

int main(){
    string input;
    cin>>input;
    string* output = new string[1000];
    int count =subs(input,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
    delete [] output;

}