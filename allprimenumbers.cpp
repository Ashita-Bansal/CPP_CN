/*Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :
Integer N
Output Format :
Prime numbers in different lines*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=2;
    while(i<=n){
        int d=2;
        int f=1;
        while(d<i){
            if (i%d==0){
                f=2;
                break;
            }d++;
        }
            
        if (f==1){
            cout<<i<<endl;  
        }i++;
    }
}