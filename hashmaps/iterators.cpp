#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<string,int> our_map;
    our_map["abc"]=1;
    our_map["def"]=2;
    our_map["ghi"]=3;
    our_map["jkl"]=4;
    our_map["mno"]=5;
    our_map["pqr"]=6;

    unordered_map<string,int> :: iterator it = our_map.begin();
    while(it!=our_map.end()){
        cout<<"key : "<<it->first<<" , value : "<<it->second<<endl;
        it++;
    }

    //find
    unordered_map<string,int> :: iterator it2=our_map.find("abc");

    //erase
    our_map.erase(it2);


}