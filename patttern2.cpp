/*
1
2 3
4 5 6 
7 8 9 10*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    int c=1;
    while (i<=n){
        int k=1;
        while (k<=n-i){
        cout<<" ";
        k=k+1;
        }
        int j=1;
        while(j<=i){
            cout<<c;
            j=j+1;
            c=c+1;
        }
    i=i+1;
    cout<<endl;
    }
}