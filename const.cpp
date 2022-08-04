#include <iostream>
using namespace std;

int main(){
    //constant int 
    const int i=10;
    int const i2=10;
    // i=12; this is not allowed now

    //constant reference form a non const int
    int j=12;
    const int &k=j;

    j++;

    cout<<j<<'\n'<<k<<endl;

    //constant reference from a non const integer
    int const j2=12;
    int const &k2=j2;

    //reference from a const integer
    int const j3=123;
    // int &k3=j3;   not allowed 

    


}