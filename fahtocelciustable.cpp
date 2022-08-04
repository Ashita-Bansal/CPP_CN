#include<iostream>
using namespace std;

int main(){
    int s;
    int e;
    int w;
    cin>>s>>e>>w;

    int i=s;
    while (i<=e){
        int c=(5.0/9)*(i-32);
        cout<<i<<"\t"<<c<<endl;
        i=i+w;
    }
}