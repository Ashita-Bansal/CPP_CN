/*
Print the following pattern
Pattern for N = 4
     *
    ***
   *****
  *******
The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N line*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
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
}