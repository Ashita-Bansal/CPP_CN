#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if (n%2==0){
        int c=(n/2)*(n/2 +1);
        cout<<c;
    }else{
        n=n-1;
        int c=(n/2)*(n/2+1);
        cout<<c;
    }
}