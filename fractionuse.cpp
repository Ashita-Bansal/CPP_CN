#include <iostream>
using namespace std;
#include "fractionclass.cpp"

int main(){
    fraction f1(10,2);
    fraction f2(15,4);
    // f1.add(f2);
    // f1.print();
    // f2.print();

    fraction const f3;
    cout<<f3.getnumerator()<<" "<<f3.getdenominator()<<endl;
    f3.setnumerator(10);
}