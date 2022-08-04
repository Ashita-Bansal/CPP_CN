#include <iostream>
using namespace std;
#include "pairclass.cpp"

int main(){
    Pair<int,int> p1;
    p1.setX(10);
    p1.setY(100);

    cout<<p1.getX()<< " "<<p1.getY();
}