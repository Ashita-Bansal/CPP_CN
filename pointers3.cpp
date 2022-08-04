#include <iostream>
using namespace std;

int main(){
    int i;
    cout<<i<<endl;

    i++;
    cout<<i<<endl;

    int *p;
    cout<<p<<endl;

    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;////very dangerous

    //isliye hamare paas agar already kuch value nhi hai to ham pointer ko null se initialise kar dete hai to avoid any blunders

    int *p=0;
}