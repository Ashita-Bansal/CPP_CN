/*
Print the following pattern for the given number of rows.
Pattern for N = 4
...1
..232
.34543
45676534

The dots represent spaces.
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int k=1;
        while (k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        int c=i;
        while(j<=i){
            cout<<c;
            j++;
            c++;
        }
        int d=2*i-2;
        while(d>=i){
            cout<<d;
            d--;
        }
        i++;
        cout<<endl;

    }

}