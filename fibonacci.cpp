/*
Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.
Input Format :
The first line of each test case contains a real number ‘N’.
Output Format :
For each test case, return its equivalent Fibonacci number.*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if (n==1){
        cout<<1;
    }else if(n==2){
        cout<<1;
    }else{
        int a=1;
        int b=1;
        int c=0;
        for(int d=1;d<=n-2;d++){
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c;
    }
}