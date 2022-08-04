/*
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5
..*
.***
*****
.***
..*

The dots represent spaces.

Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a=(n+1)/2;
    int b=a-1;

    int i=1;
    while(i<=a){
        int k=1;
        while(k<=a-i){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=(2*i-1)){
            cout<<"*";
            j++;
        }    
    i++;
    cout<<endl;
    }
    int c=1;
    int f=b;
    while(c<=b){
        int d=1;
        while(d<=c){
            cout<<" ";
            d++;
        }
        
        int e=2*f-1;
        while(e>0){
            cout<<"*";
            e--;
        }
        f--;
        c++;
        cout<<endl;
    }

}