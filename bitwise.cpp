#include <iostream>
using namespace std;

int main(){
    int ror= 15|30;
    int rand= 15&30;
    int rnot= ~15;
    int rxor= 15^30;
    int rls= 15<<2;
    int rrs= 15>>2;

    cout<<ror<<"\n"<<rand<<"\n"<<rnot<<"\n"<<rxor<<"\n"<<rls<<"\n"<<rrs;
}