/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=n;
    int i=1;
    while (i<=c){
        int j=n;
        while(j>0){
            cout<<n;
            j--;
            
        }
        i++;
        n--;
        cout<<endl;
    }
}