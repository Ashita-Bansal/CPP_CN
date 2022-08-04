#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<string,int> our_map;

    //insert
    pair<string,int> p("abc",1);
    our_map.insert(p);

    our_map["def"]=2;

    //find or access
    cout<<our_map["abc"]<<endl;
    cout<<our_map.at("abc")<<endl;

    cout<<"size : "<<our_map.size<<endl;

        //cout<<ourmap.at("ghi")<<endl;
    
    cout<<our_map["ghi"]<<endl;
    cout<<"size : "<<our_map.size<<endl;

    //check presence
    if(our_map.count("ghi")>0){
        cout<<"ghi is present"<<endl;
    }

    //erase
    our_map.erase("ghi");
    cout<<"size : "<<our_map.size<<endl;



}