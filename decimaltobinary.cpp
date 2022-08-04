/*Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number can exceed the integer range.
 So you may want to take the answer as long for CPP and Java.

Note for C++ coders: Do not use the inbuilt implementation of "pow" function. 
The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's.
Implement your own "pow" function to work for non-float data types.


Input format :
Integer N
Output format :
Corresponding Binary number (long)*/
#include <iostream>
using namespace std;
int pow(int n,int m){
    int product=1;
    for (int i=1;i<=m;i++){
        product*=n;
    }
    return product;
}
int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n>0){
        int j=pow(10,i);
        ans+=(n%2)*(j);
        n=n/2;
        i++;
    }
    cout<<ans;
    
}