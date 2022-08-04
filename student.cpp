#include <iostream>
using namespace std;
#include "Studentclass.cpp"

int main(){
    student s1;
    s1.display();

    student s2;

    student *s3 = new student;
    s3 -> display();

    cout<<"Parametrized constructors Demo"<<endl;
    student s4(10);

    s4.display();
    //For every object only one constructor is called !
     
}  