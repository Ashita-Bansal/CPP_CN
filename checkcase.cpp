#include <iostream>
using namespace std;

int main(){
    char a;
    cin>>a;
    int b1='A';
    int b2='Z';

    int c1='a';
    int c2='z';

    int q= a;

    if (q<b2 && q>b1){
        cout<<1;
    }else if(q>c1 && q<c2){
        cout<<0;
    }else{
        cout<<-1;
    }
    
}
