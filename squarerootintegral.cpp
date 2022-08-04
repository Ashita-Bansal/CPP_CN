/*Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.
Input format :
Integer N
Output Format :
Square root of N (integer part only)*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int f=pow(n,0.5);
    cout<<f;
}