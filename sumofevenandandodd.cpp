/*
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=n;
    int even=0;
    int odd=0;
    while (i>0){
        int j=i%10;
        i=i/10;
    
    
    if (j%2==0){
        even=even+j;
    }else{
        odd=odd+j;
    }
    }
    cout<<even<<" "<<odd;
}
