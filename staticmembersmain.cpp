#include <iostream>
using namespace std;
#include "staticmembersclass.cpp"

int main(){
    // Student s1;
    // cout<<s1.rollNumber<<" "<<s1.age<<endl;
    // cout<<Student :: totalStudents<<endl;

    // s1.totalStudents=20;
    // Student s2;
    // cout<<s2.totalStudents<<endl;
    // cout<<Student :: totalStudents<<endl;

    Student s1;
    Student s2;
    Student s3,s4,s5;

    //cout<<Student::totalStudents<<endl;
    cout<<Student::getTotalStudent()<<endl;
}
