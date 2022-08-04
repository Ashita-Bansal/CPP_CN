#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> *vp=new vector();
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v.at(2)<<endl;
    cout<<v.at(3)<<endl;

    v[4]=500;

    cout<<v[4]<<endl;

    cout<<"size : "<<v.size()<<endl;

    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}