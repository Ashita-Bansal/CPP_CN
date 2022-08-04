/*Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.


Input format :
Integer N
Output format :
Corresponding reverse number*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int r=0;
    while (n>0){
        int x=n%10;
        
        n=n/10;
        r=r*10+x;
       
    }
    cout<<r;
}