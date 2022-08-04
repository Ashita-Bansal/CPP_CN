/*Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=0;
    int f=0;
    while(n>0){
        int t=n%10;
        f+=(pow(2,i)*t);
        n/=10;
        i++;
    }
    cout<<f;
}