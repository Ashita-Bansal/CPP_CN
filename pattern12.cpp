/*
   1
  121
 12321
1234321*/
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
        while(j<=i){
            cout<<j;
            j++;
        }
        int w=i-1;
        while(w>0){
            cout<<w;
            w--;
        }
        i++;
        cout<<endl;
    }
}