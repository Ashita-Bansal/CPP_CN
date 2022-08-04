#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;

    bool g = a==b;
    bool h = a>b;
    bool i = a<b;

    cout<<"Are they equal : "<<g<<endl;
    cout<<"Is a greater than b : "<<h<<endl;
    cout<<"Is b greater than a : "<<i<<endl;

    //0=false;1=true
    bool third=g && h;//this is and operator and this statement will always be false i this case
    bool fourth=g || h;//this is or operator 
    cout<<"Not Equal"<<!g<<endl;
    cout<<third<<endl;
    cout<<fourth<<endl;

}