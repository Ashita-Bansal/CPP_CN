#include <iostream>
using namespace std;
#include "Studentclass.cpp"

int main(){
    student s1;//constructor 1 will be called
    student s2(101);//constructor 2 called
    student s3(20,102);//constructor 3 called
    student s4(s3);//copy constructor
    s1=s2;//no constructor is called(copy assignment operator)
    student s5=s4;//copy constructor(student s5(s4))
}