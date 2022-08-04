#include <iostream>
using namespace std;

int main(){
    int i=10;
    int *p=&i;

    int * q=p;//q is also pointing i now

    cout<<sizeof(p)<<endl;//size allocated to a pointer

    cout<<i<<endl;
    cout<<*p<<endl;

    i++;

    cout<<i<<endl;
    cout<<*p<<endl;

    int a=i;//*p=i
    a++;
    cout<<a<<endl;
    cout<<*p<<endl;

    i=121;
    cout<<i<<endl;
    cout<<*p<<endl;
    *p=21;
    cout<<i<<endl;
    cout<<*p<<endl;
    (*p)++;
    cout<<i<<endl;
    cout<<*p<<endl;
    
}