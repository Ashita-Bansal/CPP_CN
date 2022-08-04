/*Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
Input format :
Integer x
Output format :
Terms of series (separated by space)*/
#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    int i=1;
    int count=1;
    while(count<=x){
        int a=3*i+2;
        if (a%4!=0){
            cout<<a<<" ";
            count+=1;
        }
        i++;
    }
}