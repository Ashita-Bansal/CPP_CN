/*Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.
Note: Try finding out a function on the internet to do so*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int basic;
    char a;
    cin>>basic>>a;
    int allow;
    if (a=='A'){
        allow=1700;
    }else if(a=='B'){
        allow=1500;
    }else{
        allow=1300;
    }
    double hra=0.20*basic;
    double da=0.50*basic;
    double pf=0.11*basic;
    
    double totalsalary=basic+hra+da+allow-pf;
    cout<<round(totalsalary);

}