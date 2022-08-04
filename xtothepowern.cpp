/*Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1*/
#include <iostream>
using namespace std;

int main(){
    int x;
    int n;
    cin>>x>>n;
    int i=0;
    int p=1;
    while(i<n){
        p=p*x;
        i+=1;
    }
    cout<<p;
}