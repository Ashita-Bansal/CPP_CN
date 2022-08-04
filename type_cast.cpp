#include<iostream>
using namespace std;

int main(){
    int a;
    char c;
    a=100;
    c=a;
    cout<<c<<endl;//prints the character corresponding to the ascii value

    c='y';
    a=c;
    cout<<a<<endl;

    float f=1.2;
    a=f;//copies the integer value
    cout<<a<<endl;
}